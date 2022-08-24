//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//
//#define MAX_SIZE 26
//
//char map[MAX_SIZE][MAX_SIZE] = { 0, };
//int arr[500] = { 0, };
//int N;
//// 단지 수Ccnt
//int Ccnt = 0;
//// 아파트 수 Hcnt
//int Hcnt = 0;
//
//void DFS(int i, int j)
//{
//	map[i][j] = '0';
//	Hcnt++;
//	arr[Ccnt] = Hcnt;
//
//	if (0 <= i && i < N && map[i - 1][j] == '1')
//	{
//		DFS(i - 1, j);
//	}
//	if (0 <= i && i < N && map[i + 1][j] == '1')
//	{
//		DFS(i + 1, j);
//	}
//	if (0 <= j && j < N && map[i][j - 1] == '1')
//	{
//		DFS(i, j - 1);
//	}
//	if (0 <= j && j < N && map[i][j + 1] == '1')
//	{
//		DFS(i, j + 1);
//	}
//}
//
//void bubble(int* arr, int cnt)
//{
//	int tmp;
//
//	while (cnt != 0)
//	{
//		for (int k = 1; k < cnt; k++)
//		{
//			if (arr[k - 1] > arr[k])
//			{
//				tmp = arr[k];
//				arr[k] = arr[k - 1];
//				arr[k - 1] = tmp;
//			}
//		}
//		cnt--;
//	}
//}
//
//int main()
//{
//	
//	scanf("%d ", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s ", &map[i]);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (map[i][j] == '1')
//			{
//				DFS(i, j);
//				Ccnt++;
//				Hcnt = 0;
//			}
//		}
//	}
//	printf("%d\n", Ccnt);
//	bubble(arr, Ccnt);
//	//std::sort(arr, arr + Ccnt);
//	for (int k = 0; k < Ccnt; k++)
//	{
//		printf("%d\n", arr[k]);
//	}
//
//	return 0;
//}