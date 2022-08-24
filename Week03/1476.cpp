////날짜계산
// 
//#include <stdio.h>
//
//int main()
//{
//	int E, S, M;
//	scanf("%d %d %d", &E, &S, &M);
//
//	int cnt = 0;
//	while (1)
//	{
//		cnt++;
//		if (E ==1 && S == 1 && M == 1)		//출력할 조건 무한루프가 될 수 있기 때문에 while문을 나간 뒤 출력 한다.
//		{
//			break;
//		}
//		E--;
//		S--;
//		M--;
//		if (E == 0)
//		{
//			E = 15;
//		}
//		if (S == 0)
//		{
//			S = 28;
//		}
//		if (M == 0)
//		{
//			M = 19;
//		}
//		
//	}
//	printf("%d", cnt);
//
//	return 0;
//}