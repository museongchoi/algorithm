//#include <stdio.h>
//#include <stdlib.h>


////백준 2605번 줄세우기

//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int temp = 0;		//swap을 사용 할 때 값을 저장 해둘 공간(배열)
//	int* arr;
//	int* m;
//	arr = (int*)malloc(sizeof(int) * n);
//	m = (int*)malloc(sizeof(int) * n);
//
//	//1,2,3,4,5 배열을 담을 배열, idx는 0부터 시작이기 때문에 1을 더해준다
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	//입력 받는 움직여야 할 숫자 배열
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (m[i] == 0)			//뽑은 숫자가 0일 때는 가만히 있는다
//		{
//			continue;
//		}
//		else
//		{
//			for (int j = 0; j < m[i]; j++)
//			{
//				//j값을 빼서 idx값의 변동을 준다
//				temp = arr[i - j];
//				arr[i - j] = arr[i - 1 - j];
//				arr[i - 1 - j] = temp;
//				//아래처럼 할 경우 j는 반복횟수만 나타낸다
//				/*temp = arr[i];
//				arr[i] = arr[i - 1];
//				arr[i - 1] = temp;*/
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}