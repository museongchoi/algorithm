//#include <stdio.h>
//#define MAX_SIZE 52
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//
//// w �ʺ�, h ���� 50���� �۰ų� ����
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
//		// ���� ���� �������� 0,0 �� ���´�
//		if (w == 0 && h == 0)
//		{
//			return 0;
//		}
//
//		// 1�� ��, 0�� �ٴ�
//		// ��, �ٴ� �Է� �ޱ�
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