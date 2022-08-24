//약수 구하기

//#include <stdio.h>
//
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	int cnt = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (0 == n % i)
//		{
//			cnt++;
//			if (cnt == k)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	if (cnt < k)
//	{
//		printf("0");
//	}
//	
//
//	return 0;
//}


////방법2
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (0 == n % i)
//		{
//			k--;
//			if (k == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	if (k > 0)
//	{
//		printf("0");
//	}
//
//	return 0;
//}