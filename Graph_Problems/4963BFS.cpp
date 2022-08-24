//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 51
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int w, h;
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
////	remove(tmp);
////	return tmp1;
////}
//
//void BFS(std::queue<Node>* q, int n, int m)
//{
//	int i, j;
//	Node tmp1;
//	tmp1.i = n;
//	tmp1.j = m;
//	q->push(tmp1);
//	map[n][m] = 0;
//
//	while (q->empty() != true)
//	{
//		tmp1 = q->front();
//		q->pop();
//		i = tmp1.i;
//		j = tmp1.j;
//		if (i >= 1 && i <= h && j >= 1 && j <= w)
//		{
//			if (map[i - 1][j] == 1)
//			{
//				tmp1.i = i - 1;
//				tmp1.j = j;
//				q->push(tmp1);
//				map[i - 1][j] = 0;
//			}
//			if (map[i + 1][j] == 1)
//			{
//				tmp1.i = i + 1;
//				tmp1.j = j;
//				q->push(tmp1);
//				map[i + 1][j] = 0;
//			}
//			if (map[i][j - 1] == 1)
//			{
//				tmp1.i = i;
//				tmp1.j = j - 1;
//				q->push(tmp1);
//				map[i][j - 1] = 0;
//			}
//			if (map[i][j + 1] == 1)
//			{
//				tmp1.i = i;
//				tmp1.j = j + 1;
//				q->push(tmp1);
//				map[i][j + 1] = 0;
//			}
//			if (map[i - 1][j + 1] == 1)
//			{
//				tmp1.i = i - 1;
//				tmp1.j = j + 1;
//				q->push(tmp1);
//				map[i - 1][j + 1] = 0;
//			}
//			if (map[i - 1][j - 1] == 1)
//			{
//				tmp1.i = i - 1;
//				tmp1.j = j - 1;
//				q->push(tmp1);
//				map[i - 1][j - 1] = 0;
//			}
//			if (map[i + 1][j + 1] == 1)
//			{
//				tmp1.i = i + 1;
//				tmp1.j = j + 1;
//				q->push(tmp1);
//				map[i + 1][j + 1] = 0;
//			}
//			if (map[i + 1][j - 1] == 1)
//			{
//				tmp1.i = i + 1;
//				tmp1.j = j - 1;
//				q->push(tmp1);
//				map[i + 1][j - 1] = 0;
//			}
//		}
//	}
//}
//
//int main()
//{
//	//Queue q;
//	std::queue<Node> q;
//
//	while (1)
//	{
//		//init(&q);
//		int cnt = 0;
//		scanf("%d%d", &w, &h);
//
//		if (w == 0 && h == 0)
//		{
//			return 0;
//		}
//
//		for (int i = 1; i <= h; i++)
//		{
//			for (int j = 1; j <= w; j++)
//			{
//				scanf("%d", &map[i][j]);
//			}
//		}
//
//		for (int i = 1; i <= h; i++)
//		{
//			for (int j = 1; j <= w; j++)
//			{
//				if (map[i][j] == 1)
//				{
//					BFS(&q, i, j);
//					cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}