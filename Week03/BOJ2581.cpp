//#include <stdio.h>
//#include <stdlib.h>

//백준 2581번 소수

//int number = 10000;
//int arr[10001] = { 0. };
//
//void primeNumberSieve()
//{
//	arr[1] = 1;
//	for (int i = 2; i <= number; i++)
//	{
//		if (arr[i] == 1)
//		{
//			continue;
//		}
//		for (int j = i + i; j <= number; j+=i)
//		{
//			arr[j] = 1;
//		}
//	}
//}
//
//int main()
//{
//	primeNumberSieve();
//
//	int m, n;
//	scanf("%d %d", &m, &n);
//
//	int total = 0;
//	int min = 10001;
//	for (int i = m; i <= n; i++)
//	{
//		if (arr[i] == 0) 
//		{
//			total += i;
//			if (min > i)
//			{
//				min = i;
//			}
//		}
//	}
//	if (total == 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%d\n%d", total, min);
//	}
//
//	return 0;
//}