//#include <stdio.h>
//#define MAX_SIZE 6
//
//void display(int arr[]);
//
//// 선택 정렬
//// 가장 작은 값을 찾고 맨 앞에부터 차례대로 교환한다
//void selectionSort(int arr[])
//{
//	int min, minidx, tmp;
//	for (int i= 0; i < MAX_SIZE; i++)
//	{
//		min = 100;
//		// 가장 작은 값을 찾는다
//		for (int j = i; j < MAX_SIZE; j++)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j]; // 가장 작은 값과 idx 저장
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
//// 삽입 정렬
//// 앞에서부터 이동하며 앞이 자신보다 크면 뒤로 미루며 더 이상 크지 않을 때의 위치로 이동한다
//
//void insertionSort(int arr[])
//{
//	int k, j;
//	for (int i = 1; i <	MAX_SIZE; i++)
//	{
//		k = arr[i];
//
//		// 앞에서부터 이동하며 앞에 값이 자신보다 크면 뒤로 미룬다, idx 1부터 시작 앞에 값을 비교 해야 하기 때문이다
//		for (j = i - 1; j >= 0 && k < arr[j]; j--)
//		{
//			// k 값 과 비교 하여 앞에 값이 크면 뒤로 미룬다
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = k;
//	}
//}
//
//// 버블 정렬
//// 차례대로 두 개씩 비교하여 앞이 뒤보다 클 경우 교환
//// 가장 큰 값은 맨 끝 자리에 가기에 매 반복마다 끝 자리는 다시 확인하지 않는다
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
//// 주석 풀면서 하나씩 확인 해보기
//int main(void)
//{
//	int i, j, tmp;
//	int arr[] = { 5,3,8,1,2,7 };
//
//	// 선택 정렬
//	//selectionSort(arr);
//	//display(arr);
//
//	// 삽입 정렬
//	insertionSort(arr);
//	display(arr);
//
//	// 버블 정렬
//	//bubbleSort(arr);
//	//display(arr);
//
//	return 0;
//}