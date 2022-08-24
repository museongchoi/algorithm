#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 6


bool adj[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE];

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

void initadj()
{
	adj[0][1] = true;
	adj[1][2] = true;
	adj[2][1] = true;
	adj[2][0] = true;
	adj[4][0] = true;
	adj[0][4] = true;
	adj[4][3] = true;
	adj[3][4] = true;
	adj[3][5] = true;
	adj[5][4] = true;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		visited[i] = 0;
	}
}

void DFS(int h, int n)
{
	visited[h] = 1;
	printf("%d ", h);
	for (int i = 0; i < n; i++)
	{
		if (adj[h][i] == true && visited[i] == false)
		{
			DFS(i, n);
		}
	}
}


void BFS(int h, int n)
{
	Queue q;
	init(&q);

	enqueue(&q, h);
	visited[h] = 1;

	while (isEmpty(q) != 1)
	{
		h = dequeue(&q);
		printf("%d ", h);
		for (int i = 0; i < n; i++)
		{
			if (adj[h][i] == true && visited[i] == false)
			{
				enqueue(&q, i);
				visited[i] = 1;
			}
			
		}
		
	}
}


int main()
{
	initadj();
	//DFS(0, MAX_SIZE);

	BFS(0, MAX_SIZE);
}