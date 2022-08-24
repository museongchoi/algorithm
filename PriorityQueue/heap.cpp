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

//�ʱ�ȭ �Լ�
void init(HeapType* h)
{
	h->heapSize = 0;
}

//Insert
// 1. Heap �迭 �� ���� �ӽ� ��� ����
// 2. �θ� ���� �켱���� ��
//	  (3,4���� 2���� ���� �� �ݺ�)
// 3. �ӽ� ��尡 �ִ� �ڸ��� �θ� ��带 �ű��
//  -> �̶�, �ӽ� ���� �θ� ��� ���� swap�� �ƴϴ�
// 4. �ӽ� ��带 ���� �ܰ�� �̵�
// 5. �ӽ� ��忡 element�� ����

// heap �ǳ��� �ӽû����� �ѵ� �ݺ����� ���� �ڸ��� ã�´�
void insert(HeapType* h, element k)
{
	// 1) �ӽ� ������ �� ���� �ø�
	h->heapSize++;
	// 1) �ӽ� ����(�ڸ� ǥ��), heap�� �ǳ� �̱� ������ h->heapSize�� ���´�(�� �̵�)
	int idx;
	idx = h->heapSize;

	// 2) root��� or �θ��� �켱������ �� ū ��� �ߴ�
	while (idx != 1 && h->heap[idx / 2].key < k.key)
	{
		// 3) ���� ���� �θ��带 ����
		h->heap[idx] = h->heap[idx / 2];
		// 4) ���� ��带 �θ� ���� �̵�
		idx = idx / 2;
	}
	// 5) ������ idx�� data�� �� �ڸ�
	h->heap[idx] = k;
}

//Delete
// 1. Root���� �� �� �ڸ��� ������ ��带 �ӽ� ��ġ
// -> Root���� �ʿ��� ���, �����ϱ����� �ӽú����� ����
// 2. �� �ڽ� �� �켱������ ���� �ڽ��� ����
// 3. �ӽ� ���� �ڽ� ��� �켱���� ��
// 4. �ڽ� ��带 �θ� ���� �ٲ۴�
// 5. �ӽ� ��忡 ������ ��带 ����

// �� �� ��带 ��Ʈ ���� �ű� �� �ڷᱸ�� ������
void delete_heap(HeapType* h)
{
	// 1) tmp�� ������ ��� ����
	// ��� �ϳ� ������ �ϴ� ���̹Ƿ� ��ü idx���� ���� �ϳ��� ���� �Ѵ�
	element tmp;
	tmp = h->heap[h->heapSize];
	h->heapSize--;

	// p�� �θ� ��带 ����Ű�� c�� �ڽ� ��� ���� �켱������ ���� ��带 ����Ų��
	int p = 1, c = 2; // indexȰ���� ���� ���� �ʱ�ȭ

	// ��ü idx ���� ���� c���� �۰ų� ������ ���� �ݺ� �Ѵ�
	while (c <= h->heapSize)
	{
		// c���� idx���� ���� �� ���
		if (c == h->heapSize)
		{
			// idx c��° �ڸ��� tmp�� ���� �ش�
			h->heap[p] = h->heap[c];
			h->heap[c] = tmp;
		}

		// 2) ���� �ڽĺ��� ������ �ڽ��� Ŭ ���
		if (h->heap[c].key < h->heap[c + 1].key)
		{
			// 3) �ӽó��� �ڽĳ���� �켱���� ��
			if (tmp.key < h->heap[c + 1].key) 
			{
				// 4) �θ� ��忡 �ڽ� ��带 ����
				h->heap[p] = h->heap[c + 1];
			}
			else
			{
				// �θ� �ڽĺ��� ũ�� �������´�
				break;
			}
			// �θ�� �ڽ� idx ������
			p = c+1;
			c = c * 2;
		}
		else // 2) ���� �ڽ��� Ŭ ��� 
		{
			// 3) �ӽó��� �ڽĳ���� �켱���� ��
			if (tmp.key < h->heap[c].key)
			{
				// 4) �θ� ��忡 �ڽ� ��带 ����
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

// �ִ� Heap�� ������������ �迭�� ����, �ּ� Heap�� �������� ������ �� �� �ִ�.
void heapSort(HeapType* h, int arr[])
{
	for (int i = 0; i < h->heapSize; i++)
	{
		arr[i] = h->heap[1].key; // �迭�ȿ� heap�� �Ǿ� ����
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