//#include <stdio.h>
//#define MAX_SIZE 9
//
//int partition(int* arr, int l, int r)
//{
//	int p = l;
//	int low = l + 1;
//	int high = r;
//	int tmp;
//
//	// low�� high�� ���� ���� �ϱ� ������ �ݺ� 
//	while (low <= high)
//	{
//		// p �� ���� arr[low] ���� Ŭ��� ����, low �� r ���� �����δ�
//		while (arr[p] > arr[low] && low <= r)
//		{
//			low++;
//		}
//		// p  �� ���� arr[high] ���� ���� ��� ����, hight�� l ���� �����δ�
//		while (arr[p] < arr[high] && high > l)
//		{
//			high--;
//		}
//		if (low >= high)
//		{
//			break;
//		}
//		// low �� high �� �ٲ��ش�
//		tmp = arr[low];
//		arr[low] = arr[high];
//		arr[high] = tmp;
//	}
//	if (low >= high)
//	{
//		// low �� high �� ���� �� high�� ǥ��, high�� p(�ǹ�) �� �ٲپ��ش�
//		tmp = arr[high];
//		arr[high] = arr[p];
//		arr[p] = tmp;
//	}
//	// p(�ǹ�)�� ��ȯ
//	return high;
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
//void quickSort(int* arr, int l, int r)
//{
//	int q;
//
//	if (l < r)
//	{
//		display(arr);
//		q = partition(arr, l, r);
//		quickSort(arr, l, q - 1);
//		quickSort(arr, q + 1, r);
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,3,8,4,9,1,6,2,7 };
//	quickSort(arr, 0, MAX_SIZE - 1);
//	display(arr);
//
//	return 0;
//}