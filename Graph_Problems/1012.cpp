//#include <stdio.h>
//#define MAX_SIZE 51
//
//int arr[MAX_SIZE][MAX_SIZE];
//int m, n;
//
//void DFS(int x, int y)
//{
//
//	arr[x][y] = 0;
//	// Ž��
//	if (0 <= x && x < n && arr[x - 1][y] == 1)
//	{
//		DFS(x - 1, y);
//	}
//	if (0 <= x && x < n && arr[x + 1][y] == 1)
//	{
//		DFS(x + 1, y);
//	}
//	if (0 <= y && y < m && arr[x][y - 1] == 1)
//	{
//		DFS(x, y - 1);
//	}
//	if (0 <= y && y < m && arr[x][y + 1] == 1)
//	{
//		DFS(x, y + 1);
//	}
//}
//
//int main()
//{
//	// �׽�Ʈ ���̽� ����
//	int T;
//	scanf("%d", &T);
//
//
//	for (int test = 0; test < T; test++)
//	{
//		// �������� ī��Ʈ
//		int cnt = 0;
//
//		// m ���� ����, n ���� ����, k ���� ��ġ ����
//		int k;
//		scanf("%d%d%d", &m, &n, &k);
//
//		// x,y ���� ��ġ ��ǥ
//		int x, y;
//		for (int i = 0; i < k; i++)
//		{
//			scanf("%d%d", &x, &y);
//			arr[y][x] = 1;
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (arr[i][j] == 1)
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