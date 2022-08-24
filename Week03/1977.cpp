//#include <stdio.h>
//
////¿ÏÀüÁ¦°ö¼ö
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	
//	int a;
//	int sum = 0;
//	int min; //=10000
//
//	for (int i = 0; i < 100; i++)
//	{
//		a = i * i;
//		if (a >= m && a <= n)
//		{
//			if (sum == 0)
//			{
//				min = a;
//			}
//			
//			sum += a;
//			/*if (min > a)
//			{
//				min = a;
//			}*/
//		}
//	}
//	if (sum == 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%d\n%d", sum, min);
//	}
//	return 0;
//}