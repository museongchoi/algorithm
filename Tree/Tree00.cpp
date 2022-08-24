////Ʈ�� Ž��
// 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//
//// Ʈ�� ����ü
//typedef struct Tree {
//	element data;
//	struct Tree* left;
//	struct Tree* right;
//}TreeNode;
//
//// ������ȸ
//void inorder(TreeNode* root)
//{
//	if (root != NULL)
//	{
//		inorder(root->left);
//		printf("%d ", root->data);
//		inorder(root->right);
//	}
//}
//
//// ������ȸ
//void preorder(TreeNode* root)
//{
//	if (root != NULL)
//	{
//		printf("%d ", root->data);
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//
//// ������ȸ
//void postorder(TreeNode* root)
//{
//	if (root != NULL)
//	{
//		postorder(root->left);
//		postorder(root->right);
//		printf("%d ", root->data);
//	}
//}
//
//
//// Ʈ�� ����
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
//	inorder(root);
//
//	puts("\n");
//
//	preorder(root);
//
//	puts("\n");
//
//	postorder(root);
//
//	puts("\n");
//
//	return 0;
//}