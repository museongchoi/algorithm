//#include <stdio.h>
//#define MAX_SIZE 101
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int check[MAX_SIZE][MAX_SIZE] = { 0, };
//int N; // 2<=N<=100
//
//void DFS(int x, int y)
//{
//	check[x][y] = 1;
//	if (x - 1 >= 0 && x - 1 < N && check[x - 1][y] == 0)
//	{
//		DFS(x - 1, y);
//	}
//	if (x + 1 >= 0 && x + 1 < N && check[x + 1][y] == 0)
//	{
//		DFS(x + 1, y);
//	}
//	if (y - 1 >= 0 && y - 1 < N && check[x][y - 1] == 0)
//	{
//		DFS(x, y - 1);
//	}
//	if (y + 1 >= 0 && y + 1 < N && check[x][y + 1] == 0)
//	{
//		DFS(x, y + 1);
//	}
//}
//
//int main()
//{
//	scanf("%d", &N);
//
//	int tmp = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &map[i][j]);
//			if (tmp <= map[i][j])
//			{
//				tmp = map[i][j];
//			}
//		}
//	}
//
//	int cnt;	// 침수지역
//	int K = 0;
//	int key = 0;
//	while (K != tmp)
//	{
//		cnt = 0;	// 각 높이마다 침수지역 초기화
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				check[i][j] = 0;
//			}
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (map[i][j] <= K)
//				{
//					check[i][j] = 1;
//				}
//			}
//		}
//
//		for (int n = 0; n < N; n++)
//		{
//			for (int m = 0; m < N; m++)
//			{
//				if (check[n][m] == 0)
//				{
//					DFS(n, m);
//					cnt++;
//				}
//			}
//		}
//		if (key <= cnt)
//		{
//			key = cnt;
//		}
//		K++;
//	}
//	printf("%d", key);
//	
//	return 0;
//}