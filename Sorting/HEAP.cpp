//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_ELEMENT 100 // �ִ� �迭 ũ��
//
//typedef struct element
//{
//	int key;
//}element;
//
//typedef struct
//{
//	element heap[MAX_ELEMENT]; // ���� �迭
//	int heapSize;			   // ���� ũ��
//}HeapType;
//
//// heap ũ�� 0���� �ʱ�ȭ
//void init(HeapType* h)
//{
//	h->heapSize = 0;
//}
//
////insert
//void ins(HeapType* h, element k)
//{
//	// 1) heap �迭 �� ���� �ӽ� ��� ����
//	int idx = ++h->heapSize;
//
//	while (idx != 1 && k.key < h->heap[idx / 2].key)
//	{
//		h->heap[idx] = h->heap[idx / 2];
//		idx = idx / 2;
//	}
//	h->heap[idx] = k;
//}
//
////delete
//element del(HeapType* h)
//{
//	element root = h->heap[1];
//	element tmp = h->heap[(h->heapSize)--];
//
//	//p, c index�� ������ ū�� ����
//	int p = 1, c = 2;
//
//	while (c <= h->heapSize)
//	{
//		// ������ ���� ���� ������ ���� ���
//		if (c <h->heapSize && h->heap[c].key > h->heap[c + 1].key)
//		{
//			c++;
//		}
//		// �θ� �ڽĺ��� ������ �������´�
//		if (h->heap[c].key >= tmp.key)
//		{
//			break;
//		}
//		// �θ� �ڽ� ����
//		h->heap[p] = h->heap[c];
//		// p, c index �̵�
//		p = c;
//		c *= 2;
//	}
//	h->heap[p] = tmp;
//	return root;
//}
//
//void heapSort(HeapType* h, int arr[])
//{
//	
//	element add1; // ����ȯ
//
//	for (int i = 0; i < 6; i++)
//	{
//		add1 = del(h);
//		arr[i] = add1.key;
//	}
//
//	for (int j = 0; j < 6; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//
//}
//
//int main()
//{
//	HeapType h;
//	init(&h);
//
//	int arr[6] = { 3,5,8,1,2,7 };
//	int arr1[6] = { 0, }; // ���ο� �迭 ����
//
//	
//	element add; // ����ȯ
//	for (int j = 0; j < 6; j++)
//	{
//		add.key = arr[j];
//		ins(&h, add);
//	}
//
//	heapSort(&h, arr1);
//
//	return 0;
//}