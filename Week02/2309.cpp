//#include <stdio.h>
//#include <stdlib.h>


//���� 2309�� �ϰ�������
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
//	//i, j�� �迭�� idx �ݺ������� �迭�� �ϳ��� ���� �ٸ������ ���Ͽ� over�� ���� ���� ã�� �� �� p, q�� ����
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
//		if (i != p && i != q)	//i���� p, q���� �ƴҶ� �迭�� ����
//		{
//			rarr[k] = arr[i];
//			k++;
//		}
//	}
//
//	//������Ű �������� ���
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