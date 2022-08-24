//#include <stdio.h>
//
////연속구간
//
//int main()
//{
//	char arr[9];
//	int cnt = 0;
//	int MAX = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%s", arr);
//		cnt = MAX = 0;
//		for (int j = 0; j < 8; j++)
//		{
//			if (arr[j] == arr[j + 1])
//			{
//				cnt++;
//				if (MAX < cnt)
//				{
//					MAX = cnt;
//				}
//			}
//			else
//			{
//				cnt = 0;
//			}
//			
//		}
//		if (MAX == 0)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("%d\n", MAX + 1);
//		}
//	}
//
//	return 0;
//}