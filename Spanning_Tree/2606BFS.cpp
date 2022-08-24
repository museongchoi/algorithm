//#include <stdio.h>
//#include <stdlib.h>
//#include <queue>
//#define MAX_SIZE 101
//
//int line[MAX_SIZE][MAX_SIZE] = { 0, };
//int visit[MAX_SIZE] = { 0, };
//int k;
//int cnt = 0;
//
//void BFS(int n)
//{
//	visit[n] = 1;
//	std::queue<int> q;
//	q.push(n);
//
//	while (q.empty() != 1)
//	{
//		int node = q.front();
//		q.pop();
//		for (int i = 1; i <= k; i++)
//		{
//			if (line[node][i] == 1 && visit[i] != 1)
//			{
//				q.push(i);
//				visit[i] = 1;
//				cnt++;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	scanf("%d", &k);
//
//	// 직접 연결되어있는 컴퓨터 쌍의 수
//	int n;
//	scanf("%d", &n);
//
//	int x, y;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &x, &y);
//		line[x][y] = line[y][x] = 1;
//	}
//
//	BFS(1);
//
//	printf("%d", cnt);
//
//	return 0;
//}