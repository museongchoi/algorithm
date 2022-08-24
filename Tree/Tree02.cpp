////이진탐색트리
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
////트리구조
//typedef struct Tree
//{
//	element data;
//	struct Tree* left;
//	struct Tree* right;
//}TreeNode;
//
////트리의 노드 개수를 반환하는 함수
////재귀함수위 특성을 이용하는 문제로 여유가 되는경우 구현
//int count(TreeNode* root)
//{
//	if (root != NULL)
//	{
//		int c1;
//		int c2;
//		c1 = count(root->left);
//		c2 = count(root->right);
//		return c1 + c2 + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int FindMax(TreeNode* root)
//{
//	if (root != NULL)
//	{
//		int f1;
//		int f2;
//		int c;
//		f1 = FindMax(root->left);
//		f2 = FindMax(root->right);
//		c = (f1 > f2) ? f1 : f2;
//		return (c > root->data) ? c : root->data;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////재귀 또는 반복문을 통해 이진 탐색 트리(BTS)를 순회
////모든 노드를 기준으로 작은 값은 왼쪽에 큰 값은 오른쪽에 반드시 위치해야 한다.
////주어진 key값을 찾기 위해 각 노드와 값을 비교하여 빠르게 탐색이 가능함
//
////return은 되돌아간다 라는 뜻
////순환(재귀)
//TreeNode* search1(TreeNode* node, element key)
//{
//	if (node->data > key)
//	{
//		return search1(node->left, key);
//	}
//	if (node->data < key)
//	{
//		return search1(node->right, key);
//	}
//	if (node->data == key)
//	{
//		return node;
//	}
//}
//
////반복
////TreeNode* search2(TreeNode* node, element key)
////{
////
////}
//
////전체 트리를 중위순회(inorder)를 통해 출력
//void display(TreeNode* node)
//{
//	if (node != NULL)
//	{
//		display(node->left);
//		printf("%d ", node->data);
//		display(node->right);
//	}
//}
//
////트리 구조
//TreeNode n1 = { 1, NULL, NULL };
//TreeNode n2 = { 4, &n1, NULL };
//TreeNode n3 = { 16, NULL, NULL };
//TreeNode n4 = { 25, NULL, NULL };
//TreeNode n5 = { 20, &n3, &n4 };
//TreeNode n6 = { 15, &n2, &n5 };
//TreeNode* root = &n6;
//
//int main()
//{
//	//트리의 노드 개수를 반환하는 함수를 만든 경우 주석을 제거하여 실행할 것
//	printf("%d\n\n", count(root));
//	printf("%d\n\n", FindMax(root));
//
//	TreeNode* node;
//	node = search1(root, 15);
//
//	display(node);
//	//display(search2(root, 16));
//
//	return 0;
//}