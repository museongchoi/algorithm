//#include <stdio.h>
//#define MAX_SIZE 1001
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE] = { 0, };
//int cycle = 0;
//int N, M;
//
//void DFS(int x)
//{
//	visit[x] = 1;
//	for (int i = 1; i <= N; i++)
//	{
//		if (map[x][i] == 1 && visit[i] != 1)
//		{
//			DFS(i);
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d%d", &N, &M);
//
//	int u, v;
//	for (int k = 0; k < M; k++)
//	{
//		scanf("%d%d", &u, &v);
//		map[u][v] = map[v][u] = 1;
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (visit[i] == 0)
//		{
//			DFS(i);
//			cycle++;
//		}
//	}
//	printf("%d", cycle);
//
//}