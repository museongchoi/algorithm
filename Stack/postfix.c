#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ÿ�Լ��� char���� element ������ ���
typedef char element;

//1. ����ü Ÿ�Լ��� typedef�� Ÿ�Լ��� struct�� ����ü pname�� struct Node, ������ Node
//2. *(������)�� ��� �ϴ� ������ ��ȭ�� �����ÿ� ��ȭ�� ���� �÷� ������.
//3. struct Node* link�� *(������)�� ��� �ϴ� ���� struct Node�� �����Ǳ� ���̱� �����̴�.
typedef struct Node {
	element data;
	struct Node* link;
}Node;

//Ÿ�Լ��� ����ü �̸� stack ���� stack
typedef struct Stack {
	Node* top;
}Stack;

//stack �ʱ�ȭ
void init(Stack* s)
{
	s->top = NULL;
}

//stack ���� ����ִ��� Ȯ��
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

//����, �߰�
void push(Stack* s, element data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = NULL;

	new_node->link = s->top;
	s->top = new_node;
}

//����, ����
void pop(Stack* s)
{
	Node* tmp;
	tmp = s->top;
	s->top = s->top->link;
	remove(tmp);
}

//stack�� top�� data Ȯ��
element peek(Stack s)
{
	if (isEmpty(s))
	{
		return NULL;
	}

	return s.top->data;
}

//���ڿ� ������ ����ȯ
int atoi(char str)
{
	return str - '0';
}

//������
char* infixToPostfix(char infix[])
{
	Stack s;
	init(&s);
	char tmp[32] = { 0, };
	int k = 0;

	//pop�ϰ� tmp�� ������ �ؾ� �Ѵ�. stack�� ���� ���� �� tmp������ ���� �����ִ� ���
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
	
//������
int eval(char* postfix)
{
	typedef int element;

	Stack s;
	init(&s);
	int num2;
	int num1;
	int num3;

	//tmp�� ������ ���� �ϳ��� s�� ���� - ������ data�� num1,num2�� ���� �Ͽ� �����ڷ� ����� ���� �ٽ� ���ÿ� ����
	for (int j = 0; postfix[j] != '\0'; j++)
	{
		//if������ �ƽ�Ű�ڵ� ��� '*'�϶� num1*num2�� �ϰ� stack�� push�� �� �ٽ� ����ȯ
		//else�� �� ��ȯ �Ͽ� num1,num2�� ���� �ϰ�
		if (postfix[j] == '*' || postfix[j] == '/' || postfix[j] == '+' || postfix[j] == '-')
		{
			num2 = atoi(peek(s));
			pop(&s);
			num1 = atoi(peek(s));
			pop(&s);
			//stack �ʱ�ȭ
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
			//num3�� �ڷ��� Ÿ�� Ȯ��

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