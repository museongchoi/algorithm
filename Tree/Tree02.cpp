////����Ž��Ʈ��
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
////Ʈ������
//typedef struct Tree
//{
//	element data;
//	struct Tree* left;
//	struct Tree* right;
//}TreeNode;
//
////Ʈ���� ��� ������ ��ȯ�ϴ� �Լ�
////����Լ��� Ư���� �̿��ϴ� ������ ������ �Ǵ°�� ����
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
////��� �Ǵ� �ݺ����� ���� ���� Ž�� Ʈ��(BTS)�� ��ȸ
////��� ��带 �������� ���� ���� ���ʿ� ū ���� �����ʿ� �ݵ�� ��ġ�ؾ� �Ѵ�.
////�־��� key���� ã�� ���� �� ���� ���� ���Ͽ� ������ Ž���� ������
//
////return�� �ǵ��ư��� ��� ��
////��ȯ(���)
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
////�ݺ�
////TreeNode* search2(TreeNode* node, element key)
////{
////
////}
//
////��ü Ʈ���� ������ȸ(inorder)�� ���� ���
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
////Ʈ�� ����
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
//	//Ʈ���� ��� ������ ��ȯ�ϴ� �Լ��� ���� ��� �ּ��� �����Ͽ� ������ ��
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