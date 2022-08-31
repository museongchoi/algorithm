#include <stdio.h>
#define MAX_SIZE 20000

int map[MAX_SIZE][MAX_SIZE] = { 0, };
int visit[MAX_SIZE][MAX_SIZE] = { 0, };
int color[MAX_SIZE] = { 0, };
int V;
void DFS(int x)
{
	for (int i = 1; i <= V; i++)
	{
		if (map[x][i] == 1 && visit[x][i] != 1)
		{
			visit[x][i] = 1;
			color[x] = 1;
			color[i] = 2;
			DFS(i);
		}
	}
}

void check(int x, int y)
{

}

int main()
{
	int K, E, u, v;
	scanf("%d", &K);

	for (int Test = 0; Test < K; Test++)
	{
		scanf("%d%d", &V, &E);

		for (int i = 1; i <= E; i++)
		{
			scanf("%d%d", &u, &v);
			map[u][v] = 1;
		}

		for (int i = 1; i <= V; i++)
		{
			if (color == 0)
			{
				DFS(i);
			}
		}

		for (int i = 1; i <= V; i++)
		{
			for (int j = 1; j <= V; j++)
			{
				if (map[i][j] == 1)
				{
					check;
				}
			}
		}
	}
}