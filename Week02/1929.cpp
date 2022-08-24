//#include <stdio.h>

//백준 1929 소수구하기

//#define MAX_SIZE 1000001
//
//int arr[MAX_SIZE] = { 0, };
//
//void prime()
//{
//	arr[1] = 1;
//	for (int i = 2; i < MAX_SIZE; i++)
//	{
//		if (arr[i] == 1)
//		{
//			continue;
//		}
//		for (int j = i + i; j < MAX_SIZE; j += i)
//		{
//			arr[j] = 1;
//		}
//	}
//}
//
//int main()
//{
//	prime();
//
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	for (int i = m; i <= n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}