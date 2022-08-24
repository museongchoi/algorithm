//#include <stdio.h>

//백준 2446번 출력 형식이 잘 못 나왔습니다.
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int i, j, k;
//	for (i = 0; i < n; i++) {
//		for (k = 0; k < i; k++)
//			printf(" ");
//		for (j = (n * 2) - (i * 2); j > 1; j--)
//			printf("*");
//		printf("\n");
//	}
//	for (i = n-1; i > 0; i--) {
//		for (k = 1; k < i; k++)
//			printf(" ");
//		for (j = (n * 2) - (i * 2); j >= 0; j--)
//			printf("*");
//		if (i != 1) {
//			printf("\n");
//		}
//	}
//	return 0;
//}