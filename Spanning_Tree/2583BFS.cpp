//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 101
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE][MAX_SIZE] = { 0, };
//
//// 가로, 세로, 직사각형 개수
//int m, n, k;
//
//// 빈 영역 개수
//int cnt = 0;
//// 빈 영역 넓이
//int area = 0;
//int areaarr[MAX_SIZE] = { 0, };
//
//typedef int element;
//
//typedef struct Node {
//	element i;
//	element j;
//}Node;
//
//void BFS(std::queue<Node>* q, int i, int j)
//{
//	int x, y;
//	Node tmp;
//	tmp.i = i;
//	tmp.j = j;
//	q->push(tmp);
//	visit[i][j] = 1;
//	area++;
//
//	while (q->empty() != true)
//	{
//		tmp = q->front();
//		q->pop();
//		x = tmp.i;
//		y = tmp.j;
//		if (x - 1 >= 0 && x - 1 < m && map[x - 1][y] == 0 && visit[x - 1][y] == 0)
//		{
//			tmp.i = x - 1;
//			tmp.j = y;
//			q->push(tmp);
//			visit[x - 1][y] = 1;
//			area++;
//		}
//		if (x + 1 >= 0 && x + 1 < m && map[x + 1][y] == 0 && visit[x + 1][y] == 0)
//		{
//			tmp.i = x + 1;
//			tmp.j = y;
//			q->push(tmp);
//			visit[x + 1][y] = 1;
//			area++;
//		}
//		if (y - 1 >= 0 && y - 1 < n && map[x][y - 1] == 0 && visit[x][y - 1] == 0)
//		{
//			tmp.i = x;
//			tmp.j = y - 1;
//			q->push(tmp);
//			visit[x][y - 1] = 1;
//			area++;
//		}
//		if (y + 1 >= 0 && y + 1 < n && map[x][y + 1] == 0 && visit[x][y + 1] == 0)
//		{
//			tmp.i = x;
//			tmp.j = y + 1;
//			q->push(tmp);
//			visit[x][y + 1] = 1;
//			area++;
//		}
//	}
//	areaarr[cnt] = area;
//}
//
//int partition(int* arr, int start, int end)
//{
//	int pivot = start; // 피봇은 첫번째 원소
//	int low = start + 1; // 피봇 다음 원소
//	int high = end; // 마지막 원소
//	int temp;
//
//	while (low<=high)
//	{
//		// 피봇 보다 큰 값을 만날 때 까지
//		while (arr[low] <= arr[pivot] && low <= end)
//		{
//			low++;
//		}
//		// 피봇 보다 작은 값을 만날 때 까지
//		while (arr[high] >= arr[pivot] && high > start)
//		{
//			high--;
//		}
//		// low 와 high 가 만나거나 엇갈리면 종료
//		if (low >= high)
//		{
//			break;
//		}
//		temp = arr[low];
//		arr[low] = arr[high];
//		arr[high] = temp;
//	}
//	if (low >= high)
//	{
//		temp = arr[high];
//		arr[high] = arr[pivot];
//		arr[pivot] = temp;
//	}
//	return high;
//}
//
//void quickSort(int* arr, int l, int r)
//{
//	int q;
//	if (l < r)
//	{
//		q = partition(arr, l, r);
//		quickSort(arr, l, q - 1);
//		quickSort(arr, q + 1, r);
//	}
//}
//
//int main()
//{
//	scanf("%d%d%d", &m, &n, &k);
//
//	// 직사각형을 좌표로 찍고 방문체크를 해놓는다
//	int x, y, x1, y1;
//	for (int i = 0; i < k; i++)
//	{
//		scanf("%d%d%d%d", &x, &y, &x1, &y1);
//		for (int a = y; a < y1; a++)
//		{
//			for (int b = x; b < x1; b++)
//			{
//				map[a][b] = 1;
//				visit[a][b] = 1;
//			}
//		}
//	}
//	std::queue<Node> q;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (map[i][j] == 0 && visit[i][j] == 0)
//			{
//				BFS(&q, i, j);
//				cnt++;
//				area = 0;
//			}
//		}
//	}
//
//	// 정렬 시작
//	quickSort(areaarr, 0, cnt - 1);
//
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", areaarr[i]);
//	}
//	return 0;
//}