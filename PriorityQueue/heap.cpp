#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct element{
	int key;
}element;

typedef struct HeapType
{
	element heap[MAX_SIZE];
	int heapSize;
}HeapType;

//초기화 함수
void init(HeapType* h)
{
	h->heapSize = 0;
}

//Insert
// 1. Heap 배열 맨 끝ㅇ 임시 노드 삽입
// 2. 부모 노드와 우선순위 비교
//	  (3,4번은 2번이 충족 시 반복)
// 3. 임시 노드가 있던 자리에 부모 노드를 옮긴다
//  -> 이때, 임시 노드와 부모 노드 간에 swap이 아니다
// 4. 임시 노드를 다음 단계로 이동
// 5. 임시 노드에 element를 삽입

// heap 맨끝을 임시삽입을 한뒤 반복문을 돌려 자리를 찾는다
void insert(HeapType* h, element k)
{
	// 1) 임시 삽입을 할 공간 늘림
	h->heapSize++;
	// 1) 임시 삽입(자리 표시), heap의 맨끝 이기 때문에 h->heapSize를 갖는다(즉 이동)
	int idx;
	idx = h->heapSize;

	// 2) root노드 or 부모의 우선순위가 더 큰 경우 중단
	while (idx != 1 && h->heap[idx / 2].key < k.key)
	{
		// 3) 현재 노드로 부모노드를 복사
		h->heap[idx] = h->heap[idx / 2];
		// 4) 현재 노드를 부모 노드로 이동
		idx = idx / 2;
	}
	// 5) 마지막 idx가 data가 들어갈 자리
	h->heap[idx] = k;
}

//Delete
// 1. Root삭제 후 그 자리에 마지막 노드를 임시 배치
// -> Root값이 필요한 경우, 삭제하기전에 임시변수에 저장
// 2. 두 자식 중 우선순위가 높은 자식을 구별
// 3. 임시 노드와 자식 노드 우선순위 비교
// 4. 자식 노드를 부모 노드로 바꾼다
// 5. 임시 노드에 마지막 노드를 삽입

// 맨 끝 노드를 루트 노드로 옮긴 후 자료구조 재정렬
void delete_heap(HeapType* h)
{
	// 1) tmp에 마지막 노드 저장
	// 노드 하나 삭제를 하는 것이므로 전체 idx개수 에서 하나를 빼야 한다
	element tmp;
	tmp = h->heap[h->heapSize];
	h->heapSize--;

	// p는 부모 노드를 가르키고 c는 자식 노드 둘중 우선순위가 높은 노드를 가르킨다
	int p = 1, c = 2; // index활용을 위한 변수 초기화

	// 전체 idx 개수 보다 c값이 작거나 같을때 까지 반복 한다
	while (c <= h->heapSize)
	{
		// c값이 idx값과 같아 질 경우
		if (c == h->heapSize)
		{
			// idx c번째 자리에 tmp를 값을 준다
			h->heap[p] = h->heap[c];
			h->heap[c] = tmp;
		}

		// 2) 왼쪽 자식보다 오른쪽 자식이 클 경우
		if (h->heap[c].key < h->heap[c + 1].key)
		{
			// 3) 임시노드와 자식노드의 우선순위 비교
			if (tmp.key < h->heap[c + 1].key) 
			{
				// 4) 부모 노드에 자식 노드를 복사
				h->heap[p] = h->heap[c + 1];
			}
			else
			{
				// 부모가 자식보다 크면 빠져나온다
				break;
			}
			// 부모와 자식 idx 재조정
			p = c+1;
			c = c * 2;
		}
		else // 2) 왼쪽 자식이 클 경우 
		{
			// 3) 임시노드와 자식노드의 우선순위 비교
			if (tmp.key < h->heap[c].key)
			{
				// 4) 부모 노드에 자식 노드를 복사
				h->heap[p] = h->heap[c];
			}
			else
			{
				break;
			}
			p = c;
			c = p * 2;
		}

	}
}

// 최대 Heap은 오름차순으로 배열에 정렬, 최소 Heap은 내림차순 정렬을 할 수 있다.
void heapSort(HeapType* h, int arr[])
{
	for (int i = 0; i < h->heapSize; i++)
	{
		arr[i] = h->heap[1].key; // 배열안에 heap의 맨앞 저장
		delete(h);
		printf("%d ", arr[i]);
	}
}

int main()
{
	
	HeapType h;
	element k;

	init(&h);
	
	k.key = 40;
	insert(&h, k);
	
	k.key = 27;
	insert(&h, k);

	k.key = 36;
	insert(&h, k);

	k.key = 4;
	insert(&h, k);

	k.key = 13;
	insert(&h, k);

	k.key = 19;
	insert(&h, k);

	k.key = 8;
	insert(&h, k);

	for (int i = 1; i <= h.heapSize; i++)
	{
		printf("%d ", h.heap[i].key);
	}

	delete_heap(&h);
	puts("");
	for (int i = 1; i <= h.heapSize; i++)
	{
		printf("%d ", h.heap[i].key);
	}

	puts("");
	int arr[100];
	heapSort(&h, arr);
}