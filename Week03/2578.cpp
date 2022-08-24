////ºù°í
//
//#include <stdio.h>
//#define SIZE 5
//
//int main()
//{
//	int arr[SIZE][SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int n; //»çÈ¸ÀÚ º¯¼ö
//	int cnt1 = 0;
//	int cnt2 = 0;
//	int cnt3 = 0;
//	int cnt4 = 0;
//	int bingo = 0;
//	for (int k = 1; k <= 25; k++)
//	{
//		bingo = 0;
//		cnt3 = 0;
//		cnt4 = 0;
//		scanf("%d", &n);
//
//		for (int i = 0; i < SIZE; i++)
//		{
//			for (int j = 0; j < SIZE; j++)
//			{
//				if (arr[i][j] == n)
//				{
//					arr[i][j] = 0;
//				}
//			}
//		}
//		for (int i = 0; i < SIZE; i++)
//		{
//			cnt1 = 0;
//			cnt2 = 0;
//			for (int j = 0; j < SIZE; j++)
//			{
//				if (arr[i][j] == 0)		//°¡·Îºù°í
//				{
//					cnt1++;
//				}
//				if (arr[j][i] == 0)		//¼¼·Îºù°í
//				{
//					cnt2++;
//				}
//				if (i == j && arr[i][j] == 0)	//´ë°¢¼± ÁÂ - ¿ì
//				{
//					cnt3++;
//				}
//				if (i + j == 4 && arr[i][j] == 0)	//´ë°¢¼± ¿ì - ÁÂ
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