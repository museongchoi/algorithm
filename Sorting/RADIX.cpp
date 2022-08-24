//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_SIZE 8
//
//
//void Radix_get(int arr[])
//{
//	int tmp, M, N;
//	M = MAX_SIZE;
//	N = MAX_SIZE;
//
//	// 일의 자리
//	while (M != 1)
//	{
//		for (int i = 1; i < M; i++)
//		{
//			if (arr[i - 1] % 10 > arr[i] % 10)
//			{
//				tmp = arr[i];
//				arr[i] = arr[i - 1];
//				arr[i - 1] = tmp;
//			}
//		}
//		M--;
//	}
//	// 81 62 72 93 26 28 38 39
//
//	// 십의 자리
//	while (N != 1)
//	{
//		for (int j = 1; j < N; j++)
//		{
//			if (arr[j - 1] / 10 > arr[j] / 10)
//			{
//				tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//			}
//		}
//		N--;
//	}
//	
//
//	for (int m = 0; m < MAX_SIZE; m++)
//	{
//		printf("%d ", arr[m]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 28,93,39,81,62,72,38,26 };
//
//	Radix_get(arr);
//	
//	return 0;
//}