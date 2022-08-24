////¶± ¸Ô´Â È£¶ûÀÌ
//
//#include <stdio.h>
//
//int fibo(int day)
//{
//	if (day == 2 || day ==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(day - 1) + fibo(day - 2);
//	}
//}
//
//int main()
//{
//	int D, K;
//	scanf("%d %d", &D, &K);
//
//	int A, B;
//	A = fibo(D - 2);
//	B = fibo(D - 1);
//	for (int i = 1; i < K; i++)
//	{
//		for (int j = 1; j < K; j++)
//		{
//			if (K == A * i + B * j) 
//			{
//				printf("%d\n%d", i, j);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}