//#include <stdio.h>

//������
//int swap(int* a, int* b) 
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//	
//	return 0;
//}
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d %d\n", a, b);
//
//	swap(&a, &b);
//
//	printf("%d %d\n", a, b);
//
//}

//10430��
//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	printf("%d\n", (a + b) % c);
//	printf("%d\n", ((a % c) + (b % c)) % c);
//	printf("%d\n", (a * b) % c);
//	printf("%d\n", (a % c) * (b % c) % c);
//	return 0;
//
//}

//���� 10818�� �ּ�,�ִ� �迭 �Ⱦ��� �غ���
//int arr[1000001];
//
//int main(void) 
//{
//	int N;
//	scanf("%d", &N);
//
//	int i;
//	for (i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	
//	int max, min;
//	max = min = arr[0];
//
//	for (i = 0; i < N; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	printf("%d %d", min, max);
//
//	return 0;
//}

//�ִ밪���ϱ�
// int main(void)
//{
//	 int arr[5] = { 10, 8, 7, 20, 5 };
//
//	 int max = 0;
//
//	 for (int i = 0; i <= 5; i++)
//	 {
//		 if (arr[i] > max) 
//		 {
//			 max = arr[i];
//		 }
//	 }
//	printf("%d\n", max);
//	return 0;
//}

//���� 2741�� n���
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++) {
//		printf("%d\n", i);
//	}
//	return 0;
//}

//���� 2739��
//int main() 
//{
//	int dan = 0 , num = 1;
//	scanf("%d" , &dan);
//
//	for (num = 1; num < 10; num++)
//	{
//		printf("%d * %d = %d \n", dan, num, dan * num);
//	}
//	return 0;
//}

//������ / 1�� ~ 9��
//void main()
//{
//	int i = 1, j = 1;
//
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d x %d = %2d ", j, i, (i * j));
//		}
//		printf("\n");
//	}
//}

//���� 2442�� �Ƕ�̵� ����� �����!
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	int i = 0, j = 0, k = 0;
//	for (i = 0; i <= n; i++) {
//		for (k = 1; k <= n - i; k++) {
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���� 2441�� �����߰� �����
//int main() 
//{
//	int N;
//	scanf("%d", &N);
//
//	int i = 0, j = 0, k = 0;
//	for (i = 0; i < N; i++) {
//		for (k = 0; k < i; k++) {
//			printf(" ");
//		}
//		for (j = 0; j < N - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���� 2440�� ���������� �۾����� �����
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	int i = 0, j = 0;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < N - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���� 2439�� �����߰� �����
//int main()
//{
//	int num;
//	scanf("%d", &num);
//
//	int i = 0, j = 0, k = 0;
//
//	for (i = 0; i < num; i++)
//	{
//		for (k = 1; k < num - i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//���� 2438�� ���������� Ŀ���� �����
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}