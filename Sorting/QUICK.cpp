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
//	// low와 high가 서로 교차 하기 전까지 반복 
//	while (low <= high)
//	{
//		// p 값 보다 arr[low] 값이 클경우 멈춤, low 는 r 까지 움직인다
//		while (arr[p] > arr[low] && low <= r)
//		{
//			low++;
//		}
//		// p  값 보다 arr[high] 값이 작을 경우 멈춤, hight는 l 까지 움직인다
//		while (arr[p] < arr[high] && high > l)
//		{
//			high--;
//		}
//		if (low >= high)
//		{
//			break;
//		}
//		// low 와 high 를 바꿔준다
//		tmp = arr[low];
//		arr[low] = arr[high];
//		arr[high] = tmp;
//	}
//	if (low >= high)
//	{
//		// low 와 high 가 교차 후 high로 표시, high와 p(피벗) 을 바꾸어준다
//		tmp = arr[high];
//		arr[high] = arr[p];
//		arr[p] = tmp;
//	}
//	// p(피벗)을 반환
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