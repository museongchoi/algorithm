////연습장
// 
//#include <stdio.h>
//#include <stdlib.h>	//동적할당 헤드파일
//#define MAX 5
//
//int main()
//{
//	int arr[MAX][MAX];
//	for (int i = 0; i < MAX; i++)
//	{
//		for (int j = 0; j < MAX; j++)
//		{
//			scanf("%d", arr[i][j]);
//		}
//	}
//
//	int m;
//	int cnt1 = 0;
//	int cnt2 = 0;
//	int cnt3 = 0;
//	int cnt4 = 0;
//	int bingo = 0;
//	for (int k = 0; k < MAX * MAX; k++)
//	{
//		bingo = 0;
//		cnt3 = 0;
//		cnt4 = 0;
//		scanf("%d", &m);
//		for (int i = 0; i < MAX; i++)
//		{
//			for (int j = 0; j < MAX; j++)
//			{
//				if (arr[i][j] == m);
//				{
//					arr[i][j] = 0;
//				}
//			}
//		}
//		for (int i = 0; i < MAX; i++)
//		{
//			cnt1 = 0;
//			cnt2 = 0;
//			for (int  j = 0; j < MAX; j++)
//			{
//				if (arr[i][j] == 0)
//				{
//					cnt1++;
//				}
//				if (arr[j][i] == 0)
//				{
//					cnt2++;
//				}
//				if (i == j && arr[i][j] == 0)
//				{
//					cnt3++;
//				}
//				if (i + j == MAX - 1 && arr[i][j] == 0)
//				{
//					cnt4++;
//				}
//			}
//			if (cnt1 == 5)
//			{
//				bingo++;
//			}
//			if (cnt2 == 5)
//			{
//				bingo++;
//			}
//			if (cnt3 == 5)
//			{
//				bingo++;
//			}
//			if (cnt4 == 5)
//			{
//				bingo++;
//			}
//		}
//		if (bingo >= 3)
//		{
//			printf("%d", k);
//			return 0;
//		}
//	}
//
//	return 0;
//}
