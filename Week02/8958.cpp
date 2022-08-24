//백준 8958번 OX퀴즈
// 
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	char arr[80];
//	int sum = 0;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%s", arr);
//		int cnt = 0;
//		int sum = 0;
//		for (int j = 0; arr[j] != '\0'; j++) {
//			if (arr[j] == 'O') {
//				cnt++;
//				sum += cnt;
//			}
//			else {
//				cnt = 0;
//			}
//		}
//		printf("%d", sum);
//		printf("\n");
//	}
//	return 0;
//}