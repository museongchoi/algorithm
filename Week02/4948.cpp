////베르트랑 공준
//
//#include <stdio.h>
//#define MAX_SIZE 123457*2
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
//	while (1)
//	{
//		int n;
//		int cnt = 0;
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			break;
//		}
//
//		for (int i = n+1; i <= 2 * n; i++)
//		{
//			if (arr[i] == 0)
//			{
//				cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}