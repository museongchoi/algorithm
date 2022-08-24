//#include <stdio.h>
//#define MAX_SIZE 11
//
//void insSort(int arr[], int first, int last, int gap)
//{
//	int key, j;
//	for (int i = first + gap; i <= last; i = i + gap)
//	{
//		key = arr[i];
//		
//		for (j = i - gap; j >= first && key <arr[j]; j = j - gap)
//		{
//			arr[j + gap] = arr[j];
//		}
//		arr[j + gap] = key;
//	}
//}
//
//void shellsort(int* arr, int n)
//{
//	int i, gap;
//
//	for (gap = n / 2; gap > 0; gap /= 2)
//	{
//		if (gap % 2 == 0)
//		{
//			gap++;
//		}
//		for (i = 0; i < gap; i++)
//		{
//			insSort(arr, i, n - 1, gap);	// insSort(배열, 첫번째, 마지막, gap)
//		}
//
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
//int main(void)
//{
//	int arr[] = { 10,8,6,20,4,3,22,1,0,15,16 };
//	int i = MAX_SIZE;
//
//	shellsort(arr, i);
//	display(arr);
//}