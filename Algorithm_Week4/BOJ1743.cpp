//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 101
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int N, M, K;
//
//typedef int element;
//
//typedef struct Node {
//	element i;
//	element j;
//}Node;
//
//int BFS(std::queue<Node> q, int i, int j)
//{
//	int cnt = 0;
//	int x, y;
//	Node tmp;
//	tmp.i = i;
//	tmp.j = j;
//	q.push(tmp);
//	map[i][j] = 0;
//	cnt++;
//	while (q.empty() != true)
//	{
//		tmp = q.front();
//		q.pop();
//		x = tmp.i;
//		y = tmp.j;
//		if (x - 1 > 0 && x - 1 <= N && map[x - 1][y] == 1)
//		{
//			tmp.i = x - 1;
//			tmp.j = y;
//			q.push(tmp);
//			map[x - 1][y] = 0;
//			cnt++;
//		}
//		if (x + 1 > 0 && x + 1 <= N && map[x + 1][y] == 1)
//		{
//			tmp.i = x + 1;
//			tmp.j = y;
//			q.push(tmp);
//			map[x + 1][y] = 0;
//			cnt++;
//		}
//		if (y - 1 > 0 && y - 1 <= M && map[x][y - 1] == 1)
//		{
//			tmp.i = x;
//			tmp.j = y - 1;
//			q.push(tmp);
//			map[x][y - 1] = 0;
//			cnt++;
//		}
//		if (y + 1 > 0 && y + 1 <= M && map[x][y + 1] == 1)
//		{
//			tmp.i = x;
//			tmp.j = y + 1;
//			q.push(tmp);
//			map[x][y + 1] = 0;
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main()
//{
//	// 세로 N, 가로 M (1<=N,M<=100), 음식물 쓰레기의 개수 K (1<=K<=N*M), K개의 음식물 좌표 r,c
//	scanf("%d%d%d", &N, &M, &K);
//
//	int r, c;
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d%d", &r, &c);
//		map[r][c] = 1;
//	}
//
//	int ccnt, tcnt;
//	tcnt = 0;
//	std::queue<Node> q;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)
//		{
//			if (map[i][j] == 1)
//			{
//				ccnt = BFS(q, i, j);
//				if (tcnt <= ccnt)
//				{
//					tcnt = ccnt;
//				}
//			}
//		}
//	}
//	printf("%d", tcnt);
//	return 0;
//}