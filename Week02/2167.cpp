//2�����迭�� ��
// 
//#include <stdio.h>
//#include <stdlib.h>
// 
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	int** arr;								//����� ���� �����Ҵ�
//
//	arr = (int**)malloc(sizeof(int*) * n);	//n��ŭ ��
//
//	for (int i = 0; i < n; i++) {			//n���� �� m
//		arr[i] = (int*)malloc(sizeof(int) * m);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k;
//	scanf("%d", &k);
//
//	int x1, y1, x2, y2;
//	int sum = 0;
//	for (int a = 0; a < k; a++) {
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		for (int i = x1 - 1; i <= x2 - 1; i++) {
//			for (int j = y1 - 1; j <= y2 - 1; j++) {
//				sum += arr[i][j];
//			}
//		}
//		printf("%d\n", sum);
//		sum = 0;
//	}
//	return 0;
//}