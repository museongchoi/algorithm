//#include <stdio.h>
//#include <stdlib.h>


////���� 2605�� �ټ����

//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	int temp = 0;		//swap�� ��� �� �� ���� ���� �ص� ����(�迭)
//	int* arr;
//	int* m;
//	arr = (int*)malloc(sizeof(int) * n);
//	m = (int*)malloc(sizeof(int) * n);
//
//	//1,2,3,4,5 �迭�� ���� �迭, idx�� 0���� �����̱� ������ 1�� �����ش�
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	//�Է� �޴� �������� �� ���� �迭
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (m[i] == 0)			//���� ���ڰ� 0�� ���� ������ �ִ´�
//		{
//			continue;
//		}
//		else
//		{
//			for (int j = 0; j < m[i]; j++)
//			{
//				//j���� ���� idx���� ������ �ش�
//				temp = arr[i - j];
//				arr[i - j] = arr[i - 1 - j];
//				arr[i - 1 - j] = temp;
//				//�Ʒ�ó�� �� ��� j�� �ݺ�Ƚ���� ��Ÿ����
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