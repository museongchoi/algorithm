//#include <stdio.h>
//#define max_size 101
//
//// �����̹Ƿ� x,y y,x ��ǥ �Ѵ� 1�� üũ (�����⼺)
//// ��ǻ���� ���� 100�� ����
//int line[max_size][max_size] = { 0, };
//int visit[max_size] = { 0, };
//int cnt = 0;
//// ��ǻ���� ��
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
//	// ���� ����Ǿ��ִ� ��ǻ�� ���� ��
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