////����ī�̷�
// 
//#include <stdio.h>
//
////Tn �ﰢ�Լ� ���� �Լ�
//int T(int n)
//{
//	 return n * (n + 1) / 2;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d", &m);
//	
//	int cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		cnt = 0;
//		scanf("%d", &n);
//
//		for (int i = 1; i <= n; i++)		//ù��° Tn
//		{
//			for (int j = 1; j <= n; j++)		//�ι�° Tn
//			{
//				for (int k = 1; k <= n; k++)		//����° Tn
//				{
//					if (T(i) + T(j) + T(k) == n)
//					{
//						printf("1\n");
//						cnt++;
//						break;
//					}
//				}
//				if (cnt == 1) 
//				{
//					break;
//				}
//			}
//			if (cnt == 1) 
//			{
//				break;
//			}
//		}
//		if (cnt == 0)
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}