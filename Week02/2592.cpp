//#include <stdio.h>
//#include <stdlib.h>


//���� 2592 ��ǥ��

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
//	for (int i = 0; i < 10; i++)		//�� idx���� �ϳ��� �迭�� ��� ���� ��
//	{
//		cnt = 0;						//cnt�� �� for���ȿ� �ִ� ���� ���� �� ���� �� �ʱ�ȭ, ���� ���� cnt�� �����ϱ� �����̴�
//		for (int j = 0; j < 10; j++)	//idx �ϳ��� ��
//		{
//			if (arr[i] == arr[j])		//���� ���� ������ cnt ����
//			{
//				cnt++;
//			}
//			if (cnt > max)					//���� ���ڸ� ã�� cnt�� �� ���� cnt(max)�� ��
//			{
//				max = cnt;					//���� ���� ���� ���ڸ� ã��, ã�� cnt�� mode�� ����
//				mode = arr[i];
//			}
//		}
//	}
//	printf("%d\n%d", avg, mode);
//
//	return 0;
//}