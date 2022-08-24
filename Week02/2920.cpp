//À½°è
// 
//#include <stdio.h>
// 
//int main()
//{
//	int arr[8];
//
//	for (int i = 0; i < 8; i++) 
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	if (arr[0] == 1)
//	{
//		for (int i = 0; i <7; i++) 
//		{
//			if (arr[i] - arr[i + 1] != -1) 
//			{
//				printf("mixed");
//				return 0;
//			}
//		}
//		printf("ascending");
//	}
//	else if (arr[0] == 8) 
//	{
//		for (int i = 0; i < 7; i++) 
//		{
//			if (arr[i] - arr[i + 1] != 1) 
//			{
//				printf("mixed");
//				return 0;
//			}
//		}
//		printf("descending");
//	}
//	else 
//	{
//		printf("mixed");
//	}
//	return 0;
//}