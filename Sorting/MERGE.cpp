//#include <stdio.h>
//#define MAX_SIZE 7
//
///* 합병 정렬 */
///* 모든 요소가 하나로 분리 될 때까지 left ~ mid 와 mid+1 ~ right 
// 둘로 나누어 다시 합치는 Merge함수는 좌우를 비교하여 작은 값을
// 배열에 차례대로 넣는다 */
//
//// merge 함수가 mergesort 함수 아래 생성되어있기 때문에 위에 호출을 먼저 해준 것 이다
//void merge(int* arr, int l, int mid, int r);
//
////재귀함수
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
//	// left, mid, right는 고정 값
//	// p, q, i로 가르켜 이동시킨다
//	int p, q, i;
//	p = l;
//	q = mid +1;
//	i = l;
//
//	// p, q 값을 비교하여 새로만든 배열에 넣는다
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
//	// p, q 둘중 하나가 끝나면 나머지는 순서대로 배열에 넣는다
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