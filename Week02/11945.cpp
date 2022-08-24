//붙타는 붕어빵

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//
//	char** arr;
//	
//	arr = (char**)malloc(sizeof(char*) * n);
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = (char*)malloc(sizeof(char) * m);
//	}
//	
//	getchar();	//n,m입력 받은 뒤 들어오늘 enter 지워주기.
//
//	//입력 그대로 벋는 동시에 저장을 반대로
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%c", &arr[i][m - j - 1]);
//		}
//		getchar();	//문자를 하나 받는 역할, 이것으로 enter키 문자 하나를 입력 받아 지워준다.
//	}
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//백준 11945번 불타는붕어빵 / 틀림 1차원배열 행을 읽어 바로 출력
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	//char arr[11];		//정적
//	
//	char* arr;
//	arr = (char*)malloc(sizeof(char) * m);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%s", arr);
//		for (int j = m - 1; j >= 0; j--) {
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}