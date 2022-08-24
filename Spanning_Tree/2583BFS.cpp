//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 101
//
//int map[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE][MAX_SIZE] = { 0, };
//
//// ����, ����, ���簢�� ����
//int m, n, k;
//
//// �� ���� ����
//int cnt = 0;
//// �� ���� ����
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
//	int pivot = start; // �Ǻ��� ù��° ����
//	int low = start + 1; // �Ǻ� ���� ����
//	int high = end; // ������ ����
//	int temp;
//
//	while (low<=high)
//	{
//		// �Ǻ� ���� ū ���� ���� �� ����
//		while (arr[low] <= arr[pivot] && low <= end)
//		{
//			low++;
//		}
//		// �Ǻ� ���� ���� ���� ���� �� ����
//		while (arr[high] >= arr[pivot] && high > start)
//		{
//			high--;
//		}
//		// low �� high �� �����ų� �������� ����
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
//	// ���簢���� ��ǥ�� ��� �湮üũ�� �س��´�
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
//	// ���� ����
//	quickSort(areaarr, 0, cnt - 1);
//
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d ", areaarr[i]);
//	}
//	return 0;
//}