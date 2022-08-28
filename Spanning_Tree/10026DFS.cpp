#include <stdio.h>
#define MAX_SIZE 101
char map[MAX_SIZE][MAX_SIZE] = { 0, };
int visit[MAX_SIZE][MAX_SIZE] = { 0, };
int visit2[MAX_SIZE][MAX_SIZE] = { 0, };
int N;
int RGBcnt = 0;
int RBcnt = 0;

void RGB_DFS(int x, int y)
{
	visit[x][y] = 1;
	/*if (map[x][y] == 'G')
	{
		map[x][y] = 'R';
	}*/
	if (x - 1 >= 0 && x - 1 < N && map[x - 1][y] == map[x][y] && visit[x - 1][y] != 1)
	{
		RGB_DFS(x - 1, y);
	}
	if (x + 1 >= 0 && x + 1 < N && map[x + 1][y] == map[x][y] && visit[x + 1][y] != 1)
	{
		RGB_DFS(x + 1, y);
	}
	if (y - 1 >= 0 && y - 1 < N && map[x][y - 1] == map[x][y] && visit[x][y - 1] != 1)
	{
		RGB_DFS(x, y - 1);
	}
	if (y + 1 >= 0 && y + 1 < N && map[x][y + 1] == map[x][y] && visit[x][y + 1] != 1)
	{
		RGB_DFS(x, y + 1);
	}
}

void RG_DFS(int x, int y)
{
	// B 가 아닌것이라는 조건을 주면 더 간단해 진다
	/*	if (x - 1 >= 0 && x - 1 < N && ((map[x - 1][y] != 'B')) && visit2[x - 1][y] != 1)
	{
		RG_DFS(x - 1, y);
	}*/
	visit2[x][y] = 1;
	if (x - 1 >= 0 && x - 1 < N && ((map[x - 1][y] == 'R') || (map[x - 1][y] == 'G')) && visit2[x - 1][y] != 1)
	{
		RG_DFS(x - 1, y);
	}
	if (x + 1 >= 0 && x + 1 < N && ((map[x + 1][y] == 'R') || (map[x + 1][y] == 'G')) && visit2[x + 1][y] != 1)
	{
		RG_DFS(x + 1, y);
	}
	if (y - 1 >= 0 && y - 1 < N && ((map[x][y - 1] == 'R') || (map[x][y - 1] == 'G')) && visit2[x][y - 1] != 1)
	{
		RG_DFS(x, y - 1);
	}
	if (y + 1 >= 0 && y + 1 < N && ((map[x][y + 1] == 'R') || (map[x][y + 1] == 'G')) && visit2[x][y + 1] != 1)
	{
		RG_DFS(x, y + 1);
	}
}

void B_DFS(int x, int y)
{
	visit2[x][y] = 1;
	if (x - 1 >= 0 && x - 1 < N && map[x - 1][y] == 'B' && visit2[x - 1][y] != 1)
	{
		B_DFS(x - 1, y);
	}
	if (x + 1 >= 0 && x + 1 < N && map[x + 1][y] == 'B' && visit2[x + 1][y] != 1)
	{
		B_DFS(x + 1, y);
	}
	if (y - 1 >= 0 && y - 1 < N && map[x][y - 1] == 'B' && visit2[x][y - 1] != 1)
	{
		B_DFS(x, y - 1);
	}
	if (y + 1 >= 0 && y + 1 < N && map[x][y + 1] == 'B' && visit2[x][y + 1] != 1)
	{
		B_DFS(x, y + 1);
	}
}

//  R(빨강), G(초록), B(파랑)
int main()
{
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N;i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%c", &map[i][j]);
		}
		getchar();
	}

	/*for (int i = 0; i < N; i++)
	{
		scanf("%s", &map[i]);
	}*/

	/*for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", map[i][j]);
		}
		puts("");
	}*/

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (visit[i][j] == 0)
			{
				RGB_DFS(i, j);
				RGBcnt++;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (((map[i][j] == 'R') || (map[i][j] == 'G')) && visit2[i][j] == 0)
			{
				RG_DFS(i, j);
				RBcnt++;
			}
			if (map[i][j] == 'B' && visit2[i][j] == 0)
			{
				B_DFS(i, j);
				RBcnt++;
			}
		}
	}
	printf("%d %d", RGBcnt, RBcnt);
	
	return 0;
}