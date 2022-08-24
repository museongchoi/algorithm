#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node {
	element data;
	struct Node* link;
}Node;

typedef struct Queue {
	Node* front;
	Node* rear;
}Queue;

//�ʱ�ȭ
void init(Queue* q)
{
	q->front = NULL;
	q->rear = NULL;
}

//q ���� ����ִ��� Ȯ��
int isEmpty(Queue q)
{
	if (q.front == NULL || q.rear == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//����, �߰�
void enqueue(Queue* q, element data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = NULL;

	if (isEmpty(*q) == 1)
	{
		q->front = new_node;
		q->rear = new_node;
	}
	else
	{
		q->rear->link = new_node;
		q->rear = new_node;
	}
}

//����, ����
void dequeue(Queue* q)
{
	Node* tmp;
	tmp = q->front;
	q->front = q->front->link;
	delete tmp;
}

//�Ǿ� q�� data Ȯ��
element peek(Queue q)
{
	return q.front->data;
}

//1,2,3 �߰� �� �ϳ��� ����
int main()
{
	Queue q;
	init(&q);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);

	printf("%d\n", peek(q));
	dequeue(&q);
	printf("%d", peek(q));
}