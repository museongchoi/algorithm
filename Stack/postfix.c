#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//타입선언 char형은 element 별명을 사용
typedef char element;

//1. 구조체 타입선언 typedef는 타입선언 struct는 구조체 pname은 struct Node, 별명은 Node
//2. *(포인터)를 사용 하는 이유는 변화가 있을시와 변화가 없을 시로 나눈다.
//3. struct Node* link에 *(포인터)를 사용 하는 이유 struct Node가 생성되기 전이기 때문이다.
typedef struct Node {
	element data;
	struct Node* link;
}Node;

//타입선언 구조체 이름 stack 별명 stack
typedef struct Stack {
	Node* top;
}Stack;

//stack 초기화
void init(Stack* s)
{
	s->top = NULL;
}

//stack 안이 비어있는지 확인
int isEmpty(Stack s)
{
	if (s.top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//삽입, 추가
void push(Stack* s, element data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = NULL;

	new_node->link = s->top;
	s->top = new_node;
}

//삭제, 제외
void pop(Stack* s)
{
	Node* tmp;
	tmp = s->top;
	s->top = s->top->link;
	remove(tmp);
}

//stack의 top에 data 확인
element peek(Stack s)
{
	if (isEmpty(s))
	{
		return NULL;
	}

	return s.top->data;
}

//문자열 정수로 형변환
int atoi(char str)
{
	return str - '0';
}

//중위식
char* infixToPostfix(char infix[])
{
	Stack s;
	init(&s);
	char tmp[32] = { 0, };
	int k = 0;

	//pop하고 tmp에 저장을 해야 한다. stack은 연산 저장 후 tmp저장할 값을 갖고있는 기능
	for (int i = 0; infix[i] != '\0'; i++)
	{
		if (infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] == '-' || infix[i] == '(' || infix[i] == ')')
		{
			if (infix[i] == '+' || infix[i] == '-')
			{
				if (peek(s) == '*' || peek(s) == '/')
				{
					while (peek(s) != NULL)
					{
						tmp[k++] = peek(s);
						pop(&s);
					}
				}

			}
			push(&s, infix[i]);

			if (peek(s) == ')')
			{
				pop(&s);
				while (peek(s) != '(')
				{
					tmp[k++] = peek(s);
					pop(&s);
				}
				pop(&s);
			}
		}
		else
		{
			tmp[k++] = infix[i];
		}
	}
	if (isEmpty(s) == 0)
	{
		while (peek(s) != NULL)
		{
			tmp[k++] = peek(s);
			pop(&s);
		}
	}
	return tmp;
}
	
//후위식
int eval(char* postfix)
{
	typedef int element;

	Stack s;
	init(&s);
	int num2;
	int num1;
	int num3;

	//tmp에 저장한 값을 하나씩 s에 저장 - 저장한 data를 num1,num2에 저장 하여 연산자로 계산한 값을 다시 스택에 저장
	for (int j = 0; postfix[j] != '\0'; j++)
	{
		//if에서는 아스키코드 사용 '*'일때 num1*num2를 하고 stack에 push할 때 다시 형변환
		//else는 형 변환 하여 num1,num2에 저장 하게
		if (postfix[j] == '*' || postfix[j] == '/' || postfix[j] == '+' || postfix[j] == '-')
		{
			num2 = atoi(peek(s));
			pop(&s);
			num1 = atoi(peek(s));
			pop(&s);
			//stack 초기화
			if (postfix[j] == '*')
			{
				num3 = num1 * num2;
			}
			else if (postfix[j] == '/')
			{
				num3 = num1 / num2;
			}
			else if (postfix[j] == '+')
			{
				num3 = num1 + num2;
			}
			else if (postfix[j] == '-')
			{
				num3 = num1 - num2;
			}
			//num3의 자료형 타입 확인

			push(&s, num3);

		}
		else
		{
			push(&s, postfix[j]);
		}
	}
	return peek(s);
}

int main()
{
	char arr[] = "(2+3)*4-9";
	char* tmp;
	int tmp1;

	tmp = infixToPostfix(arr);
	tmp1 = eval(tmp);

	printf("%d", tmp1); 

	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>


typedef char element;

typedef struct NodeType
{
	element data;
	struct NodeType* link;
}Node;

typedef struct StackType
{
	Node* top;
}Stack;


void init(Stack* s)
{
	s->top = NULL;
}

int isEmpty(Stack s)
{
	if (s.top == NULL)
	{
		return 1;
	}

	return 0;
}

void push(Stack* s, element data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = NULL;

	if (isEmpty(*s))
	{
		s->top = new_node;
	}
	else
	{
		new_node->link = s->top;
		s->top = new_node;
	}
}

void pop(Stack* s)
{
	if (isEmpty(*s))
	{
		return;
	}

	Node* temp = s->top;
	s->top = s->top->link;
	remove(temp);
}

element peek(Stack s)
{
	return s.top->data;
}

void display(Stack s)
{
	Node* p = s.top;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->link;
	}
}

int prec(char op)
{
	switch (op) {
	case '(':
	case ')':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	}
}

void infixToPostfix(char exp[], char postfix[])
{
	int i, j = 0;

	Stack s;
	init(&s);

	for (i = 0; exp[i] != '\0'; i++) {
		switch (exp[i])
		{
		case '+':
		case '-':
		case '*':
		case '/':
			while (!isEmpty(s) && (prec(exp[i]) <= prec(peek(s))))
			{
				postfix[j++] = peek(s);
				pop(&s);
			}
			push(&s, exp[i]);
			break;

		case '(':
			push(&s, exp[i]);
			break;

		case ')':
			while (peek(s) != '(') {
				postfix[j++] = peek(s);
				pop(&s);
			}
			pop(&s);
			break;

		default:
			postfix[j++] = exp[i];
			break;
		}
	}

	while (!isEmpty(s)) {
		postfix[j++] = peek(s);
		pop(&s);
	}
	postfix[j] = '\0';
}

int exp(char exp[])
{
	int i;
	typedef int element;

	Stack s;
	init(&s);

	for (i = 0; exp[i]; i++) {
		if ('0' <= exp[i] && exp[i] <= '9') push(&s, exp[i] - '0');
		else {
			int op2 = peek(s); pop(&s);
			int op1 = peek(s); pop(&s);

			switch (exp[i]) {
			case '+': push(&s, op1 + op2); break;
			case '-': push(&s, op1 - op2); break;
			case '*': push(&s, op1 * op2); break;
			case '/': push(&s, op1 / op2); break;
			}
		}
	}
	return peek(s);
}

int main(void)
{
	char infix[] = { "(2+3)*4-9" };
	char postfix[16];

	infixToPostfix(infix, postfix);
	printf("%s\n", postfix);

	printf("%d\n", exp(postfix));

	return 0;
}
*/