//#include <stdio.h>
//#include <stdlib.h>


//백준 2309번 일곱난쟁이
//int main()
//{
//	int arr[9];
//	int total = 0;
//	int over = 0;
//
//	for (int i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		total += arr[i];
//	}
//	over = total - 100;
//
//	//i, j는 배열의 idx 반복문으로 배열의 하나의 값을 다른값들과 더하여 over와 같은 값을 찾은 후 각 p, q에 저장
//	int p, q;
//	p = q = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = i + 1; j < 9; j++)
//		{
//			if (over == arr[i] + arr[j])
//			{
//				p = i;
//				q = j;
//				break;
//			}
//		}
//	}
//
//	int rarr[7];
//	int k = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		if (i != p && i != q)	//i값이 p, q값이 아닐때 배열에 대입
//		{
//			rarr[k] = arr[i];
//			k++;
//		}
//	}
//
//	//난쟁이키 오름차순 출력
//	int temp;
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = i + 1; j < 7; j++)
//		{
//			if (rarr[i] > rarr[j])
//			{
//				temp = rarr[i];
//				rarr[i] = rarr[j];
//				rarr[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d\n", rarr[i]);
//	}
//
//	return 0;
//}