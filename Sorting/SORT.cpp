//#include <stdio.h>
//#define MAX_SIZE 6
//
//void display(int arr[]);
//
//// ���� ����
//// ���� ���� ���� ã�� �� �տ����� ���ʴ�� ��ȯ�Ѵ�
//void selectionSort(int arr[])
//{
//	int min, minidx, tmp;
//	for (int i= 0; i < MAX_SIZE; i++)
//	{
//		min = 100;
//		// ���� ���� ���� ã�´�
//		for (int j = i; j < MAX_SIZE; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j]; // ���� ���� ���� idx ����
//				minidx = j;
//			}
//		}
//		// swap
//		tmp = arr[minidx];
//		arr[minidx] = arr[i];
//		arr[i] = tmp;
//	}
//}
//
//// ���� ����
//// �տ������� �̵��ϸ� ���� �ڽź��� ũ�� �ڷ� �̷�� �� �̻� ũ�� ���� ���� ��ġ�� �̵��Ѵ�
//
//void insertionSort(int arr[])
//{
//	int k, j;
//	for (int i = 1; i <	MAX_SIZE; i++)
//	{
//		k = arr[i];
//
//		// �տ������� �̵��ϸ� �տ� ���� �ڽź��� ũ�� �ڷ� �̷��, idx 1���� ���� �տ� ���� �� �ؾ� �ϱ� �����̴�
//		for (j = i - 1; j >= 0 && k < arr[j]; j--)
//		{
//			// k �� �� �� �Ͽ� �տ� ���� ũ�� �ڷ� �̷��
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = k;
//	}
//}
//
//// ���� ����
//// ���ʴ�� �� ���� ���Ͽ� ���� �ں��� Ŭ ��� ��ȯ
//// ���� ū ���� �� �� �ڸ��� ���⿡ �� �ݺ����� �� �ڸ��� �ٽ� Ȯ������ �ʴ´�
//
//void bubbleSort(int arr[])
//{
//	int M = MAX_SIZE;
//	int k = 0;
//
//	while (M != 1)
//	{
//		for (int i = 0; i < M - 1; i++)
//		{
//			display(arr);
//
//			if (arr[i] > arr[i + 1])
//			{
//				k = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = k;
//			}
//		}
//		M--;
//	}
//}
//
//void display(int arr[])
//{
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	puts("");
//}
//
//// �ּ� Ǯ�鼭 �ϳ��� Ȯ�� �غ���
//int main(void)
//{
//	int i, j, tmp;
//	int arr[] = { 5,3,8,1,2,7 };
//
//	// ���� ����
//	//selectionSort(arr);
//	//display(arr);
//
//	// ���� ����
//	insertionSort(arr);
//	display(arr);
//
//	// ���� ����
//	//bubbleSort(arr);
//	//display(arr);
//
//	return 0;
//}