//#include <stdio.h>
//#define max_size 101
//
//// 간선이므로 x,y y,x 좌표 둘다 1로 체크 (역방향성)
//// 컴퓨터의 수는 100개 이하
//int line[max_size][max_size] = { 0, };
//int visit[max_size] = { 0, };
//int cnt = 0;
//// 컴퓨터의 수
//int k;
//
//void dfs(int n)
//{
//	visit[n] = 1;
//	for (int i = 1; i <= k; i++)
//	{
//		if (line[n][i] == 1 && visit[i] != 1)
//		{
//			cnt++;
//			dfs(i);
//		}
//	}
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
//	dfs(1);
//
//	printf("%d", cnt);
//
//	return 0;
//}