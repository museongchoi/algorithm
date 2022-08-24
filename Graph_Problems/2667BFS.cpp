//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 26
//
//int N;
//char map[MAX_SIZE][MAX_SIZE] = { 0, };
//int arr[500] = { 0, };
//int Hcnt = 0;
//int Ccnt = 0;
//
//typedef int element;
//
//typedef struct Node {
//	element i;
//	element j;
//	//struct Node* link;
//}Node;
//
////typedef struct Queue {
////	Node* front;
////	Node* rear;
////}Queue;
////
////void init(Queue* q)
////{
////	q->front = NULL;
////	q->rear = NULL;
////}
////
////int isEmpty(Queue q)
////{
////	if (q.front == NULL || q.rear == NULL)
////	{
////		return 1;
////	}
////	else
////	{
////		return 0;
////	}
////}
////
////void enqueue(Queue* q, element i, element j)
////{
////	Node* new_node = (Node*)malloc(sizeof(Node));
////	new_node->i = i;
////	new_node->j = j;
////	new_node->link = NULL;
////
////	if (isEmpty(*q) == 1)
////	{
////		q->front = new_node;
////		q->rear = new_node;
////	}
////	else
////	{
////		q->rear->link = new_node;
////		q->rear = new_node;
////	}
////}
////
////Node dequeue(Queue* q)
////{
////	Node* tmp;
////	Node tmp1;
////	tmp1.i = q->front->i;
////	tmp1.j = q->front->j;
////	tmp1.link = NULL;
////	tmp = q->front;
////	q->front = q->front->link;
////
////	if (q->front == NULL)
////	{
////		q->front = NULL;
////		q->rear = NULL;
////	}
////	//remove(tmp);
////	delete(tmp);
////	return tmp1;
////}
//
//
//void BFS(std::queue<Node>* q, int n, int m)
//{
//	int i, j;
//	Node tmp1;
//	tmp1.i = n;
//	tmp1.j = m;
//
//	q->push(tmp1);
//	map[n][m] = '0';
//	Hcnt++;
//
//	while (q->empty() != true)
//	{
//		tmp1 = q->front();
//		q->pop();
//		i = tmp1.i;
//		j = tmp1.j;
//		if (i >= 0 && i < N && map[i - 1][j] == '1')
//		{
//			tmp1.i = i - 1;
//			tmp1.j = j;
//			q->push(tmp1);
//			map[i - 1][j] = '0';
//			Hcnt++;
//		}
//		if (i >= 0 && i < N && map[i + 1][j] == '1')
//		{
//			tmp1.i = i + 1;
//			tmp1.j = j;
//			q->push(tmp1);
//			map[i + 1][j] = '0';
//			Hcnt++;
//		}
//		if (j >= 0 && j < N && map[i][j - 1] == '1')
//		{
//			tmp1.i = i;
//			tmp1.j = j - 1;
//			q->push(tmp1);
//			map[i][j - 1] = '0';
//			Hcnt++;
//		}
//		if (j >= 0 && j < N && map[i][j + 1] == '1')
//		{
//			tmp1.i = i;
//			tmp1.j = j + 1;
//			q->push(tmp1);
//			map[i][j + 1] = '0';
//			Hcnt++;
//		}
//	}
//	arr[Ccnt] = Hcnt;
//}
//
//void bubble(int* arr, int cnt)
//{
//	int tmp;
//
//	while (cnt != 0)
//	{
//		for (int k = 1; k < cnt; k++)
//		{
//			if (arr[k - 1] > arr[k])
//			{
//				tmp = arr[k];
//				arr[k] = arr[k - 1];
//				arr[k - 1] = tmp;
//			}
//		}
//		cnt--;
//	}
//}
//
//int main()
//{
//	//Queue q;
//	//init(&q);
//	std::queue<Node> q;
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", &map[i]);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (map[i][j] == '1')
//			{
//				BFS(&q, i, j);
//				Ccnt++;
//				Hcnt = 0;
//			}
//		}
//	}
//	printf("%d\n", Ccnt);
//	bubble(arr, Ccnt);
//
//	for (int k = 0; k < Ccnt; k++)
//	{
//		printf("%d\n", arr[k]);
//	}
//	return 0;
//}