//#include <stdio.h>
//#include <algorithm>
//#define MAX_SIZE 101
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE][MAX_SIZE] = { 0, };
//
//// 가로 세로 직사각형 개수
//int m, n, k;
//// 빈 영역 개수
//int cnt = 0;
//// 빈 영역 넓이
//int area = 0;
//int areaarr[MAX_SIZE] = { 0, };
//
//void DFS(int i, int j)
//{
//	area++;
//	visit[i][j] = 1;
//	if (i >= 0 && i < m && j >= 0 && j < n)
//	{
//		if (i - 1 >= 0 && i - 1 < m && map[i - 1][j] == 0 && visit[i - 1][j] != 1)
//		{
//			DFS(i - 1, j);
//		}
//		if (i + 1 >= 0 && i + 1 < m && map[i + 1][j] == 0 && visit[i + 1][j] != 1)
//		{
//			DFS(i + 1, j);
//		}
//		if (j - 1 >= 0 && j - 1 < n && map[i][j - 1] == 0 && visit[i][j - 1] != 1)
//		{
//			DFS(i, j - 1);
//		}
//		if (j + 1 >= 0 && j + 1 < n && map[i][j + 1] == 0 && visit[i][j + 1] != 1)
//		{
//			DFS(i, j + 1);
//		}
//	}
//	areaarr[cnt] = area;
//}
//
////int partition(int* arr, int l, int r)
////{
////	int p = l;
////	int low = l+1;
////	int high = r;
////	int tmp;
////
////	// low와 hight가 교차하기 전 까지 반복
////	while (low <= high)
////	{
////		while (arr[low] <= arr[p] && low <= r)
////		{
////			low++;
////		}
////		while (arr[high] >= arr[p] && high > l)
////		{
////			high--;
////		}
////		if (low >= high)
////		{
////			break;
////		}
////		// low 와 hight 를 바꿔준다
////		tmp = arr[low];
////		arr[low] = arr[high];
////		arr[high] = tmp;
////	}
////	if (low >= high)
////	{
////		tmp = arr[high];
////		arr[high] = arr[p];
////		arr[p] = tmp;
////	}
////	return high;
////}
////
////void quickSort(int* arr, int l, int r)
////{
////	int q;
////	if(l < r)
////	{
////		q = partition(arr, l, r);
////		quickSort(arr, l, q - 1);
////		quickSort(arr, q + 1, r);
////	}
////}
//
//int main()
//{
//	scanf("%d%d%d", &m, &n, &k);
//
//	// k번 입력 받아야 한다
//	int x, y, xx, yy;
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d%d%d%d", &x, &y, &xx, &yy);
//		for (int a = y; a < yy; a++)
//		{
//			for (int b = x; b < xx; b++)
//			{
//				map[a][b] = 1;
//				visit[a][b] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (map[i][j] == 0 && visit[i][j] != 1)
//			{
//				DFS(i, j);
//				cnt++;
//				area = 0;
//			}
//		}
//	}
//
//	printf("%d\n", cnt);
//
//	// 정렬
//	//quickSort(areaarr, 0, cnt - 1);
//	std::sort(areaarr, areaarr + cnt);
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", areaarr[i]);
//	}
//
//	return 0;
//}