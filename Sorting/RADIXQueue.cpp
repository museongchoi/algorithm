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

// q에 있는 값을 하나 씩 빼면서 data 값을 반환 후 배열 안에 넣어줘야 한다
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

// 배열 안에 하나의 요소가 q, 기수정렬은 여러개의 q를 갖는다
/* 배열 안에 있는 값을 사용
 1) 일의 자리 비교 0~9 순서대로 queue에 넣는다
 2) queue에 있는 값을 빼면서 배열에 다시 넣는다
  1),2) 반복 */

void RadixGet(int arr[])
{
	Queue arr1[10];
	int tmp, i;

	for (int i = 0; i <= 9; i++)
	{
		init(&arr1[i]);
	}

	// 일의 자리 비교
	for (int j = 0; j < MAX_SIZE; j++) // arr의 idx이동
	{
		i = arr[j] % 10;
		enqueue(&arr1[i], arr[j]);
	}

	// 일의 자리로 정렬된 값을 dequeue로 리턴받아
	// arr1의 idx 이동
	int n = 0; // arr의 idx이동
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

	// 십의 자리 정렬
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