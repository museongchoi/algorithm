////트리 탐색
// 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//
//// 트리 구조체
//typedef struct Tree {
//	element data;
//	struct Tree* left;
//	struct Tree* right;
//}TreeNode;
//
//// 중위순회
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
//// 전위순회
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
//// 후위순회
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
//// 트리 정보
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