//��Ÿ�� �ؾ

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
//	getchar();	//n,m�Է� ���� �� ������ enter �����ֱ�.
//
//	//�Է� �״�� ���� ���ÿ� ������ �ݴ��
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%c", &arr[i][m - j - 1]);
//		}
//		getchar();	//���ڸ� �ϳ� �޴� ����, �̰����� enterŰ ���� �ϳ��� �Է� �޾� �����ش�.
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

//���� 11945�� ��Ÿ�ºؾ / Ʋ�� 1�����迭 ���� �о� �ٷ� ���
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	//char arr[11];		//����
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