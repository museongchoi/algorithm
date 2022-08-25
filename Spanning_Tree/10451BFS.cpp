//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 1001
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int arr[MAX_SIZE] = { 0, };
//int visit[MAX_SIZE] = { 0, };
//int N;
//int cycle = 0;
//
//void BFS(int x)
//{
//	visit[x] = 1;
//	std::queue<int> q;
//	q.push(x);
//
//	while (q.empty()!=1)
//	{
//		int node = q.front();
//		q.pop();
//		for (int i = 1; i <= N; i++)
//		{
//			if (map[node][i] == 1 && visit[i] != 1)
//			{
//				q.push(i);
//				visit[i] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//
//	for (int test = 0; test < T; test++)
//	{
//		cycle = 0;
//		scanf("%d", &N);
//		// ÃÊ±âÈ­
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 0; j <= N; j++)
//			{
//				map[i][j] = 0;
//			}
//		}
//		for (int i = 0; i <= N; i++)
//		{
//			visit[i] = 0;
//		}
//
//		for (int n = 1; n <= N; n++)
//		{
//			scanf("%d", &arr[n]);
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			map[i][arr[i]] = 1;
//		}
//		for (int j = 1; j <= N; j++)
//		{
//			if (visit[j] == 0)
//			{
//				BFS(j);
//				cycle++;
//			}
//		}
//		printf("%d\n", cycle);
//	}
//
//	return 0;
//}