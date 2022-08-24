//#include <stdio.h>
//#define MAX_SIZE 52
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//
//// w 너비, h 높이 50보다 작거나 같음
//int w, h;
//
//void DFS(int i, int j)
//{
//	map[i][j] = 0;
//
//	if (i >= 1 && i <= h && j >= 1 && j <= w)
//	{
//		if (map[i - 1][j] == 1)
//		{
//			DFS(i - 1, j);
//		}
//		if (map[i + 1][j] == 1)
//		{
//			DFS(i + 1, j);
//		}
//		if (map[i][j - 1] == 1)
//		{
//			DFS(i, j - 1);
//		}
//		if (map[i][j + 1] == 1)
//		{
//			DFS(i, j + 1);
//		}
//		if (map[i - 1][j + 1] == 1)
//		{
//			DFS(i - 1, j + 1);
//		}
//		if (map[i - 1][j - 1] == 1)
//		{
//			DFS(i - 1, j - 1);
//		}
//		if (map[i + 1][j + 1] == 1)
//		{
//			DFS(i + 1, j + 1);
//		}
//		if (map[i + 1][j - 1] == 1)
//		{
//			DFS(i + 1, j - 1);
//		}
//	}
//}
//
//int main()
//{
//	while (1)
//	{
//		int cnt = 0;
//		scanf("%d%d", &w, &h);
//
//		// 종료 조건 마지막에 0,0 이 들어온다
//		if (w == 0 && h == 0)
//		{
//			return 0;
//		}
//
//		// 1은 땅, 0은 바다
//		// 땅, 바다 입력 받기
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
//					DFS(i, j);
//					cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}