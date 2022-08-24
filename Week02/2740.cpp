//백준 2740번 행렬곱셈
// 
//#include <stdio.h>
//#include <stdlib.h>
// 
//int main()
//{
//	int n, m, k;
//
//	scanf("%d %d", &n, &m);
//	int** a;
//	a = (int**)malloc(sizeof(int*) * n);
//	for (int i = 0; i < n; i++) {
//		a[i] = (int*)malloc(sizeof(int) * m);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	scanf("%d %d", &m, &k);
//	int** b;
//	b = (int**)malloc(sizeof(int*) * m);
//	for (int i = 0; i < m; i++) {
//		b[i] = (int*)malloc(sizeof(int) * k);
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < k; j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	
//	//곱셈한 값을 저장할 행렬 크기
//	int** c;
//	c = (int**)malloc(sizeof(int*) * n);
//	for (int i = 0; i < n; i++) {
//		c[i] = (int*)malloc(sizeof(int) * k);
//	}
//	
//	for (int i = 0; i < n; i++) {		//n*m + m*k == n*k
//		for (int j = 0; j < k; j++) {
//			c[i][j] = 0;				//행렬 초기화
//			for (int l = 0; l < m; l++) {
//				c[i][j] += a[i][l] * b[l][j];		//값을 하나씩 출력
//			}
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}