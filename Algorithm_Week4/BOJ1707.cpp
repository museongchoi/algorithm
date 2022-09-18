#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 2001

int **map;
int visit[MAX_SIZE] = {0,};
int color[MAX_SIZE] = {0,};
// 정점의 개수 V, 간선의 개수 E
int V;

int DFS(int x)
{
	int p = 1;
	if (visit[x] == 0)
	{
		visit[x] = 1;
		color[x] = 1;
	}

	for (int i = 1; i <= V; i++)
	{
		if (p == 0)
		{
			break;
		}
		if (map[x][i] == 1)
		{
			if (map[x][i] == 1 && visit[i] == 0)
			{
				if (color[x] == 1)
				{
					color[i] = 2;
				}
				if (color[x] == 2)
				{
					color[i] = 1;
				}
				visit[i] = 1;
				p = DFS(i);
			}
			else
			{
				if (color[x] == color[i])
				{
					return 0;
				}
			}
		}
	}
	if (p == 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int K, E, u, v;
	scanf("%d", &K);

	for (int Test = 0; Test < K; Test++)
	{
		// 초기화
		for (int i = 0; i <= V; i++)
		{
			for (int j = 0; j <= V; j++)
			{
				map[i][j] = 0;
			}
			visit[i] = 0;
		}

		scanf("%d%d", &V, &E);
		// 2차원 배열 map 동적할당
		map = (int **)malloc(sizeof(int *) * V);
		for (int i = 0; i < V; i++)
		{
			*map = (int *)malloc(sizeof(int) * V);
		}

		for (int i = 1; i <= E; i++)
		{
			scanf("%d%d", &u, &v);
			map[u][v] = 1;
		}

		int k;
		for (int i = 1; i <= V; i++)
		{
			if (visit[i] == 0)
			{
				k = DFS(i);
			}
		}

		if (k == 0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}