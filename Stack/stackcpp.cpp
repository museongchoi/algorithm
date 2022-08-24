#include <stdio.h>
#include <stdlib.h>


typedef int element;

typedef struct Node {
	element data;
	struct Node* link;
}Node;

typedef struct Stack {
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
	else
	{
		return 0;
	}
}

void push(Stack* s, element data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = NULL;

	new_node->link = s->top;
	s->top = new_node;
}

void pop(Stack* s)
{
	Node* tmp;
	tmp = s->top;
	s->top = s->top->link;
	delete tmp;
}

element peek(Stack s)
{
	return s.top->data;
}

int main()
{
	Stack s;
	init(&s);
	printf("%d\n", isEmpty(s));

	push(&s, 1);
	push(&s, 2);
	push(&s, 3);

	peek(s); printf("%d\n", s.top->data);
	pop(&s);
	peek(s); printf("%d", s.top->data);

	return 0;
}