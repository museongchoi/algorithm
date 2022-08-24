//#include <stdio.h>
//#include <stdlib.h>


//백준 2592 대표값

//int main()
//{
//	int arr[10];
//	int avg = 0;
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	avg = sum / 10;
//
//	int cnt = 0;
//	int max = 0;
//	int mode;
//	for (int i = 0; i < 10; i++)		//앞 idx부터 하나씩 배열에 모든 수와 비교
//	{
//		cnt = 0;						//cnt는 위 for문안에 있는 다음 숫자 비교 시작 전 초기화, 다음 수의 cnt를 세야하기 때문이다
//		for (int j = 0; j < 10; j++)	//idx 하나씩 비교
//		{
//			if (arr[i] == arr[j])		//같은 수가 있으면 cnt 증가
//			{
//				cnt++;
//			}
//			if (cnt > max)					//같은 숫자를 찾은 cnt를 전 숫자 cnt(max)와 비교
//			{
//				max = cnt;					//가장 많이 나온 숫자를 찾음, 찾은 cnt를 mode에 저장
//				mode = arr[i];
//			}
//		}
//	}
//	printf("%d\n%d", avg, mode);
//
//	return 0;
//}