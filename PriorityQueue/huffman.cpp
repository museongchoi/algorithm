//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_SIZE 100
//
//// ����ü ���� //
//
//// TreeNode�� ch�� ��尡 ������ ���ڸ� ���ϸ�
//// weight�� �ش� ������ �󵵼��� �ǹ��Ѵ�
//// �̶� weight�� element����ü�� key���� �����ϴ�
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
//// �Լ� ���� �� ���� //
//
//// ���� heap�� ���� �Լ���� �����ϴ� �� �ٽ� �ۼ��ϸ� �ȴ�
//// �̶� ���� �Լ� del�� �ϳ��� element�� ��ȯ�Ѵٴ� �� ����
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
//		// ���� �ڽĺ��� ������ �ڽ��� ���� ��� �ڽ� index + 1
//		if (c < h->heapSize && h->heap[c].key > h->heap[c + 1].key)
//		{
//			c++;
//		}
//		// �θ� �ڽĺ��� ������ ���� ���´�
//		if (tmp.key <= h->heap[c].key)
//		{
//			break;
//		}
//
//		// �ڽ� ��带 �θ� ���� �ٲ۴�
//		h->heap[p] = h->heap[c];
//		// �θ�� �ڽ� �ε��� ������
//		p = c;
//		c *= 2;
//	}
//	// ������ �θ� index�� tmp�� �� ��ġ
//	h->heap[p] = tmp;
//	return root;
//}
//
//// �ϳ��� Ʈ����带 �����Ҵ� �� �׸� ��ȯ�ϴ� �Լ�
//// �켱���� ť�κ��� �� ���� ��带 ������ ��带 ���鶧 ���ȴ�
//Node* makeTree(Node* l, Node* r)
//{
//	//ù ���� Ʈ���� init���� ������ �ʱ�ȭ ����� �ϴ� �� �ƴѰ�?
//	//�켱���� ť���� ���� �� �� ���� �� l, ū �� r�� ����
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->left = l;
//	new_node->right = r;
//	
//	return new_node;
//}
//
//// ���� heap�� key���� �����ָ�ȴ�
//// ���� heap�� ���¸� �����ִ� �Լ��̴�
//// heap�� ũ�⸦ �̿��Ͽ� heap�迭�� ��� ��Ҹ� ����ϸ� �ȴ�
//void display(MinHeap* h)
//{
//	for (int i = 1; i <= h->heapSize; i++)
//	{
//		printf("%d ", h->heap[i].key);
//	}
//	puts("");
//}
//
//// ���� Ʈ���� ���¸� �����ִ� �Լ��̴�
//// ������ȸ(perorde)�� ���� ����� �� ��
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
//// �������� �˰����� ����Ǵ� ������ �Լ��̴�
//// �Է����δ� freq(�󵵼�), letter(�� ����), �׸��� �����ǰ��� n�� �־�����
//// ���̵��� �ִ� ������ �־��� �������� Ȱ���Ͽ� �ذ��غ��⸦ �����Ѵ�
//// ����� �ϴ� ������ ���� �ۼ��� �ξ����� �����ϸ鼭 �ùٸ� ����� ��Ÿ������ Ȯ��
//void huffman(int freq[], char letter[], int n)
//{
//	int i;
//	Node* make;
//	MinHeap H; init(&H);
//	element e, e1, e2;
//	char bit[MAX_SIZE];
//
//	// �迭�� �ִ� ������ TreeNode���·� ������ִ� ����
//	// makeTree�� Ȱ���Ͽ�(�̶� l,r ���� NULL)�� �ش� ��� ���� ������ ������ ���� �־��ָ�ȴ�
//	// ��带 ������ Heap�� ����
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
//	// ins, del�� ������ ���, del�� ���� �� �ΰ��� �޾� ���� ���� ins�� ����Ͽ� �ٽ� ���迭�� �־��ش�
//	// ���� ���� �� ���� ���� �󵵼� ��带 ������ Heap�� ����
//	// �־��� ���� �� ����� ������ n���̹Ƿ� �ݺ����� n-1�� ����
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
//	// �ݺ��� ������ heap���� ����Ʈ���� ���Եȴ�
//	e = del(&H); //����Ʈ��
//	puts("");
//
//	showTree(e.pTree);
//	puts("");
//}
//
//
//// main�Լ� //
//int main()
//{
//	int freq[] = { 15, 12, 8, 6, 4 };
//	char letter[] = { 'e','t','n','i','s' };
//
//	huffman(freq, letter, 5);
//
//	return 0;
//}