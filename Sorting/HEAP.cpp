#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 100 // 최대 배열 크기

typedef struct element
{
	int key;
}element;

typedef struct
{
	element heap[MAX_ELEMENT]; // 히프 배열
	int heapSize;			   // 히프 크기
}HeapType;

// heap 크기 0으로 초기화
void init(HeapType* h)
{
	h->heapSize = 0;
}

//insert
void ins(HeapType* h, element k)
{
	// 1) heap 배열 맨 끝에 임시 노드 삽입
	int idx = ++h->heapSize;

	while (idx != 1 && k.key < h->heap[idx / 2].key)
	{
		h->heap[idx] = h->heap[idx / 2];
		idx = idx / 2;
	}
	h->heap[idx] = k;
}

//delete
element del(HeapType* h)
{
	element root = h->heap[1];
	element tmp = h->heap[(h->heapSize)--];

	//p, c index로 작은값 큰값 구분
	int p = 1, c = 2;

	while (c <= h->heapSize)
	{
		// 오른쪽 값이 왼쪽 값보다 작을 경우
		if (c <h->heapSize && h->heap[c].key > h->heap[c + 1].key)
		{
			c++;
		}
		// 부모가 자식보다 작으면 빠져나온다
		if (h->heap[c].key >= tmp.key)
		{
			break;
		}
		// 부모에 자식 복사
		h->heap[p] = h->heap[c];
		// p, c index 이동
		p = c;
		c *= 2;
	}
	h->heap[p] = tmp;
	return root;
}

void heapSort(HeapType* h, int arr[])
{
	
	element add1; // 형변환

	for (int i = 0; i < 6; i++)
	{
		add1 = del(h);
		arr[i] = add1.key;
	}

	for (int j = 0; j < 6; j++)
	{
		printf("%d ", arr[j]);
	}

}

int main()
{
	HeapType h;
	init(&h);

	int arr[6] = { 3,5,8,1,2,7 };
	int arr1[6] = { 0, }; // 새로운 배열 공간

	
	element add; // 형변환
	for (int j = 0; j < 6; j++)
	{
		add.key = arr[j];
		ins(&h, add);
	}

	heapSort(&h, arr1);

	return 0;
}
