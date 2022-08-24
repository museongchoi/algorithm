#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 8

typedef int element;

typedef struct Node
{
	element data;
	struct Node* link;
}Node;

typedef struct Queue
{
	Node* front;
	Node* rear;
}Queue;

void init(Queue* q)
{
	q->front = NULL;
	q->rear = NULL;
}

int isEmpty(Queue q)
{
	if (q.front == NULL && q.rear == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

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

// q�� �ִ� ���� �ϳ� �� ���鼭 data ���� ��ȯ �� �迭 �ȿ� �־���� �Ѵ�
 element dequeue(Queue* q)
{
	Node* tmp;
	element key;
	tmp = q->front;
	q->front = q->front->link;
	if (q->front == NULL)
	{
		q->rear = NULL;
	}
	key = tmp->data;

	delete tmp;
	return key;
}

element peek(Queue q)
{
	return q.front->data;
}

// �迭 �ȿ� �ϳ��� ��Ұ� q, ��������� �������� q�� ���´�
/* �迭 �ȿ� �ִ� ���� ���
 1) ���� �ڸ� �� 0~9 ������� queue�� �ִ´�
 2) queue�� �ִ� ���� ���鼭 �迭�� �ٽ� �ִ´�
  1),2) �ݺ� */

void RadixGet(int arr[])
{
	Queue arr1[10];
	int tmp, i;

	for (int i = 0; i <= 9; i++)
	{
		init(&arr1[i]);
	}

	// ���� �ڸ� ��
	for (int j = 0; j < MAX_SIZE; j++) // arr�� idx�̵�
	{
		i = arr[j] % 10;
		enqueue(&arr1[i], arr[j]);
	}

	// ���� �ڸ��� ���ĵ� ���� dequeue�� ���Ϲ޾�
	// arr1�� idx �̵�
	int n = 0; // arr�� idx�̵�
	for (int i = 0; i <= 9; i++)
	{
		while (isEmpty(arr1[i]) != 1)
		{
			tmp = dequeue(&arr1[i]);
			arr[n] = tmp;
			n++;
			if (n == 7)
			{
				break;
			}
		}
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");

	// ���� �ڸ� ����
	for (int j = 0; j < MAX_SIZE; j++)
	{
		i = arr[j] / 10;
		enqueue(&arr1[i], arr[j]);
	}

	int m = 0;
	for (int i = 0; i <= 9; i++)
	{
		while (isEmpty(arr1[i]) != 1)
		{
			tmp = dequeue(&arr1[i]);
			arr[m] = tmp;
			m++;
			if (m == 7)
			{
				break;
			}
		}
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[] = { 28,93,39,81,62,72,38,26 };
	

	RadixGet(arr);

}