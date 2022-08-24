//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100
//
//// 구조체 선언 //
//
//// TreeNode의 ch는 노드가 가지는 문자를 뜻하며
//// weight는 해당 문자의 빈도수를 의미한다
//// 이때 weight는 element구조체의 key값과 동일하다
//
//typedef struct TreeNode
//{
//	int weight;
//	char ch;
//	struct TreeNode* left;
//	struct TreeNode* right;
//}Node;
//
//typedef struct Element
//{
//	Node* pTree;
//	int key;
//}element;
//
//typedef struct HeapType
//{
//	element heap[MAX_SIZE];
//	int heapSize;
//}MinHeap;
//
//// 함수 선언 및 정의 //
//
//// 먼저 heap에 관한 함수들로 복습하는 겸 다시 작성하면 된다
//// 이때 삭제 함수 del은 하나의 element를 반환한다는 점 주의
//
//void init(MinHeap* h)
//{
//	h->heapSize = 0;
//}
//
//void ins(MinHeap* h, element data)
//{
//	int idx = ++(h->heapSize);
//
//	while (idx != 1 && data.key < h->heap[idx / 2].key)
//	{
//		h->heap[idx] = h->heap[idx / 2];
//		idx = idx / 2;
//	}
//	h->heap[idx] = data;
//}
//
//element del(MinHeap* h)
//{
//	element root = h->heap[1];
//	element tmp = h->heap[(h->heapSize)--];
//
//	int p = 1, c = 2;
//
//	while (c <= h->heapSize)
//	{
//		// 왼쪽 자식보다 오른쪽 자식이 작을 경우 자식 index + 1
//		if (c < h->heapSize && h->heap[c].key > h->heap[c + 1].key)
//		{
//			c++;
//		}
//		// 부모가 자식보다 작으면 빠져 나온다
//		if (tmp.key <= h->heap[c].key)
//		{
//			break;
//		}
//
//		// 자식 노드를 부모 노드로 바꾼다
//		h->heap[p] = h->heap[c];
//		// 부모와 자식 인덱스 재조정
//		p = c;
//		c *= 2;
//	}
//	// 마지막 부모 index가 tmp가 들어갈 위치
//	h->heap[p] = tmp;
//	return root;
//}
//
//// 하나의 트리노드를 동적할당 후 그를 반환하는 함수
//// 우선순위 큐로부터 두 개의 노드를 가지고 노드를 만들때 사용된다
//Node* makeTree(Node* l, Node* r)
//{
//	//첫 생성 트리는 init에서 양쪽을 초기화 해줘야 하는 것 아닌가?
//	//우선순위 큐에서 값을 줄 때 작은 값 l, 큰 값 r로 주자
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->left = l;
//	new_node->right = r;
//	
//	return new_node;
//}
//
//// 현재 heap의 key값을 보여주면된다
//// 현재 heap의 상태를 보여주는 함수이다
//// heap의 크기를 이용하여 heap배열의 모든 요소를 출력하면 된다
//void display(MinHeap* h)
//{
//	for (int i = 1; i <= h->heapSize; i++)
//	{
//		printf("%d ", h->heap[i].key);
//	}
//	puts("");
//}
//
//// 현재 트리의 상태를 보여주는 함수이다
//// 전위순회(perorde)를 통해 출력을 할 것
//void showTree(Node* root)
//{
//	if (root != NULL)
//	{
//		printf("%d ", root->weight);
//		showTree(root->left);
//		showTree(root->right);
//	}
//}
//
//// 실질적인 알고리즘이 적용되는 허프만 함수이다
//// 입력으로는 freq(빈도수), letter(각 문자), 그리고 문자의개수 n이 주어진다
//// 난이도가 있는 것으로 주어진 변수들을 활용하여 해결해보기를 권장한다
//// 출력을 하는 시점은 따로 작성해 두었으니 실행하면서 올바른 결과가 나타났는지 확인
//void huffman(int freq[], char letter[], int n)
//{
//	int i;
//	Node* make;
//	MinHeap H; init(&H);
//	element e, e1, e2;
//	char bit[MAX_SIZE];
//
//	// 배열에 있는 값들을 TreeNode형태로 만들어주는 과정
//	// makeTree를 활용하여(이때 l,r 값을 NULL)로 준다 노드 형태 공간을 만든후 값을 넣어주면된다
//	// 노드를 생성후 Heap에 삽입
//	for (int j = 0; j < n; j++)
//	{
//		make = makeTree(NULL, NULL);
//		make->ch = letter[j];
//		make->weight = freq[j];
//		e.key = make->weight;
//		e.pTree = make;
//		ins(&H, e);
//	}
//
//	display(&H);
//	puts("");
//
//	// ins, del을 적절히 사용, del로 작은 값 두개를 받아 합한 값을 ins을 사용하여 다시 힙배열에 넣어준다
//	// 가장 작은 두 값을 합한 빈도수 노드를 생성후 Heap에 저장
//	// 주어진 문자 즉 노드의 개수가 n개이므로 반복문을 n-1번 실행
//	for (i = 1; i < n; i++)
//	{
//		e1 = del(&H);
//		e2 = del(&H);
//		e.key = e1.key + e2.key;
//		make = makeTree(e1.pTree, e2.pTree);
//		make->weight = e.key;
//		e.pTree = make;
//		ins(&H, e);
//		display(&H);
//	}
//
//	// 반복이 끝나면 heap에는 최종트리만 남게된다
//	e = del(&H); //최종트리
//	puts("");
//
//	showTree(e.pTree);
//	puts("");
//}
//
//
//// main함수 //
//int main()
//{
//	int freq[] = { 15, 12, 8, 6, 4 };
//	char letter[] = { 'e','t','n','i','s' };
//
//	huffman(freq, letter, 5);
//
//	return 0;
//}