//#include <stdio.h>
//#define MAX_SIZE 7
//
///* �պ� ���� */
///* ��� ��Ұ� �ϳ��� �и� �� ������ left ~ mid �� mid+1 ~ right 
// �ѷ� ������ �ٽ� ��ġ�� Merge�Լ��� �¿츦 ���Ͽ� ���� ����
// �迭�� ���ʴ�� �ִ´� */
//
//// merge �Լ��� mergesort �Լ� �Ʒ� �����Ǿ��ֱ� ������ ���� ȣ���� ���� ���� �� �̴�
//void merge(int* arr, int l, int mid, int r);
//
////����Լ�
//void mergesort(int* arr, int l, int r)
//{
//	int mid;
//	
//	if (l < r)
//	{
//		mid = (l + r) / 2;
//		mergesort(arr, l, mid);
//		mergesort(arr, mid + 1, r);
//		merge(arr, l, mid, r);
//	}
//}
//
//void merge(int* arr, int l, int mid, int r)
//{
//	int arr1[MAX_SIZE] = { 0, };
//
//	// left, mid, right�� ���� ��
//	// p, q, i�� ������ �̵���Ų��
//	int p, q, i;
//	p = l;
//	q = mid +1;
//	i = l;
//
//	// p, q ���� ���Ͽ� ���θ��� �迭�� �ִ´�
//	while (p <= mid && q <= r)
//	{
//		if (arr[p] < arr[q])
//		{
//			arr1[i] = arr[p];
//			p++;
//		}
//		else
//		{
//			arr1[i] = arr[q];
//			q++;
//		}
//		i++;
//	}
//	// p, q ���� �ϳ��� ������ �������� ������� �迭�� �ִ´�
//	if (p > mid)
//	{
//		for (int j = q; j <= r; j++)
//		{
//			arr1[i] = arr[j];
//			i++;
//		}
//	}
//	else
//	{
//		for (int k = p; k <= mid; k++)
//		{
//			arr1[i] = arr[k];
//			i++;
//		}
//	}
//
//	for (i = l; i <= r; i++)
//	{
//		arr[i] = arr1[i];
//	}
//	
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
//int main()
//{
//	int arr[] = { 27, 10, 12, 20, 25, 13, 15 };
//	mergesort(arr, 0, 6);
//	display(arr);
//
//	return 0;
//}