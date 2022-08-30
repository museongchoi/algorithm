//#include <stdio.h>
//#define MAX_SIZE 101
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE][MAX_SIZE] = { 0, };
//int G;
//
//void DFS(int f, int x, int y)
//{
//	visit[f][y] = 1;
//	for (int i = 0; i < G; i++)
//	{
//		if (map[y][i] == 1 && visit[f][i] != 1)
//		{
//			DFS(f, y, i);
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &G);
//
//	for (int i = 0; i < G; i++)
//	{
//		for (int j = 0; j < G; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 0; i < G; i++)
//	{
//		for (int j = 0; j < G; j++)
//		{
//			if (map[i][j] == 1 && visit[i][j] != 1)
//			{
//				DFS(i, i, j);
//			}
//		}
//	}
//
//	for (int i = 0; i < G; i++)
//	{
//		for (int j = 0; j < G; j++)
//		{
//			printf("%d ", visit[i][j]);
//		}
//		puts("");
//	}
//	return 0;
//}