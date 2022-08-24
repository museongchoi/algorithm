//#include <stdio.h>

//백준 1110번 더하기사이클 방법2.
//int main()
//{
//	int input;
//	int count = 0;
//	scanf("%d", &input);
//
//	int num = input;
//	while (1) {		//whlie(1) 무조건 참 무한루프
//		num = (num % 10) * 10 + ((num / 10 + num % 10) % 10);
//		count++;
//		if (num == input) {
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//백준 1110번 더하기사이클 방법1.
//int main()
//{
//	int a, b, c, d = -1, num, input, count=0;
//	scanf("%d", &input);
//
//	num = input;
//
//	while (d != num)
//	{
//		a = input / 10; //십의자리
//		b = input % 10; //일의자리
//		c = (a + b) % 10; //더한값의 일의자리
//		d = (b * 10) + c; //새로운 값
//		input = d;
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}