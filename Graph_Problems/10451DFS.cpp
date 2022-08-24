#include <stdio.h>
#define MAX_SIZE 1001
int arr[MAX_SIZE] = { 0, };
int visit[MAX_SIZE] = { 0, };
int map[MAX_SIZE][MAX_SIZE] = { 0, };
int N;
int cycle = 0;

void DFS(int x)
{
	visit[x] = 1;
	for (int i = 1; i <= N; i++)
	{
		if (map[x][i] == 1 && visit[i] != 1)
		{
			map[x][i] = 0;
			DFS(i);
		}
	}
}

int main()
{
	int T;
	scanf("%d", &T);

	// 2 <= N <= 1000
	for (int test = 0; test < T; test++)
	{
		for (int i = 0; i <= N; i++)
		{
			for (int j = 0; j <= N; j++)
			{
				map[i][j] = 0;
			}
		}
		for (int i = 0; i <= N; i++)
		{
			visit[i] = 0;
		}
		cycle = 0;
		scanf("%d", &N);
		for (int n = 1; n <= N; n++)
		{
			scanf("%d", &arr[n]);
		}
		for (int i = 1; i <= N; i++)
		{
			map[i][arr[i]] = 1;
		}
		for (int j = 1; j < N; j++)
		{
			if (visit[j] == 0)
			{
				DFS(j);
				cycle++;
			}
		}
		
		printf("%d\n", cycle);
	}

	return 0;
}