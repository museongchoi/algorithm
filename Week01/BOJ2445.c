//#include <stdio.h>

//���� 2445��
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int i, j, k;
//	for (i = 1; i <= n; i++) {
//		for (j = 0; j < i; j++)
//			printf("*");
//		for (k = (n * 2) - (i * 2); k > 0; k--)
//			printf(" ");
//		for (j = 0; j < i; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	for (i = n-1; i > 0; i--) {
//		for (j = 0; j < i; j++)
//			printf("*");
//		for (k = (n * 2) - (i * 2); k > 0; k--)
//			printf(" ");
//		for (j = 0; j < i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//���� 2445�� flag��� - ��� n�� �����ϸ� false(i--)�� ����
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int i, j, k;
//	i = 1;
//	bool flag = false;
// 
//	while(true){
//		for (j = 0; j < i; j++)
//			printf("*");
//		for (k = (n * 2) - (i * 2); k > 0; k--)
//			printf(" ");
//		for (j = 0; j < i; j++)
//			printf("*");
//		printf("\n");
//		if (i == n)
//			flag = true;
//		if (flag == false) {
//			i++;
//		}
//		else if (flag == true){
//			i--;
//			if (i == 0)
//				break;
//		}
//		
//	}
//	return 0;
//}