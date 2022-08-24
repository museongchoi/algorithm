//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 51
//
//int m, n;
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//
//typedef int element;
//
//typedef struct Node {
//	element i;
//	element j;
//}Node;
//
//
//void BFS(std::queue<Node>* q, int row, int column)
//{
//	int i, j;
//	Node tmp1;
//	tmp1.i = row;
//	tmp1.j = column;
//	q->push(tmp1);
//	map[row][column] = 0;
//
//	while (q->empty() != true)
//	{
//		tmp1 = q->front();
//		q->pop();
//		i = tmp1.i;
//		j = tmp1.j;
//		if (i >= 0 && i < n && map[i - 1][j] == 1)
//		{
//			tmp1.i = i - 1;
//			tmp1.j = j;
//			q->push(tmp1);
//			map[i - 1][j] = 0;
//		}
//		if (i >= 0 && i < n && map[i + 1][j] == 1)
//		{
//			tmp1.i = i + 1;
//			tmp1.j = j;
//			q->push(tmp1);
//			map[i + 1][j] = 0;
//		}
//
//		if (j >= 0 && j < m && map[i][j - 1] == 1)
//		{
//			tmp1.i = i;
//			tmp1.j = j - 1;
//			q->push(tmp1);
//			map[i][j - 1] = 0;
//		}
//		if (j >= 0 && j < m && map[i][j + 1] == 1)
//		{
//			tmp1.i = i;
//			tmp1.j = j + 1;
//			q->push(tmp1);
//			map[i][j + 1] = 0;
//		}
//	}
//}
//
//int main()
//{
//	std::queue<Node> q;
//
//	int T;
//	scanf("%d ", &T);
//
//	for (int test = 0; test < T; test++)
//	{
//		// 흰지렁이 cnt 와 q 한번 테스트 할때 초기화
//		int cnt = 0;
//
//		int k;
//		scanf("%d%d%d ", &m, &n, &k);
//
//		int x, y;
//		for (int i = 0; i < k; i++)
//		{
//			scanf("%d%d", &x, & y);
//			map[y][x] = 1;
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
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