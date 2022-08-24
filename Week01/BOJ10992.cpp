//#include <stdio.h>
//
////백준 10992번 
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int i, j, k;
//	i = j = k = 0;
//	for (i = 0; i < n -1; i++) {
//		for (k = n-1; k > i; k--) {		//처음
//			printf(" ");
//		}
//		printf("*");
//
//		if (i != 0) {					//중간
//			for (j = 0; j < 2*i-1; j++) {
//				printf(" ");
//			}
//			printf("*");
//		}
//		printf("\n");
//	}
//		for (j = 0; j < 2*n-1; j++) {	//끝
//			printf("*");
//		}
//		printf("\n");
//}