//#include <stdio.h>

//���� 1110�� ���ϱ����Ŭ ���2.
//int main()
//{
//	int input;
//	int count = 0;
//	scanf("%d", &input);
//
//	int num = input;
//	while (1) {		//whlie(1) ������ �� ���ѷ���
//		num = (num % 10) * 10 + ((num / 10 + num % 10) % 10);
//		count++;
//		if (num == input) {
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//���� 1110�� ���ϱ����Ŭ ���1.
//int main()
//{
//	int a, b, c, d = -1, num, input, count=0;
//	scanf("%d", &input);
//
//	num = input;
//
//	while (d != num)
//	{
//		a = input / 10; //�����ڸ�
//		b = input % 10; //�����ڸ�
//		c = (a + b) % 10; //���Ѱ��� �����ڸ�
//		d = (b * 10) + c; //���ο� ��
//		input = d;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}