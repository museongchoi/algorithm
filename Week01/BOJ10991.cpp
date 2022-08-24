//#include <stdio.h>

//백준 10991번 방법.2
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int i, j, k;
//	i = j = k = 0;
//
//	for (i = 0; i < n; i++) {
//		for (k = n - 1; k > i; k--) {
//			printf(" ");
//		}
//		for (j = 0; j < i+1; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//백준 10991번 방법.1
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0, j = 0, k = 0;
//	for (i = 1; i <= n; i++) {
//		for (k = 1; k <= n-i; k++) {
//			printf(" ");
//		}
//		for (j = 0; j <= 2 * i; j++) {
//			if (j % 2 == 1) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		if (i != n) {
//			printf("\n");
//		}
//
//	}
//	return 0;
//}