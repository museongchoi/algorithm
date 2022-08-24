//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int element;
//typedef struct TreeNode
//{
//	element data;
//	struct TreeNode* left, * right;
//}TreeNode;
//
////��ȯ (���)
//TreeNode* search1(TreeNode* node, element key)
//{
//	if (node != NULL)
//	{
//		return NULL;
//	}
//	if (key == node->data)
//	{
//		return node;
//	}
//	else if (key < node->data)
//	{
//		return search1(node->left, key);
//	}
//	else
//	{
//		return search1(node->right, key);
//	}
//}
//
//// �ݺ�
//TreeNode* search2(TreeNode* node, element key) {
//	while (node != NULL) {
//		if (key == node->data) return node;
//		else if (key < node->data) node = node->left;
//		else node = node->right;
//	}
//	return NULL;
//}
//
//void insert_node(TreeNode** root, int key) {
//	TreeNode* p, * t;
//
//	//t�� ����ġ, p�� �θ���
//	t = *root;
//	p = NULL;
//
//	// t�� p�� �̿��ؼ� key���� ���� ���ο� ��尡 �� ��ġ�� ����ش�
//	// ���Ḯ��Ʈ���� p�� q�� ����Ͽ� link�� �ٲپ��� �Ͱ� ����� ������� �����ϸ� �ȴ�.
//	// �ݺ����� ������ �Ǹ� p�� ���ο� ��尡 �� �ڸ��� �θ� ����Ű�� �־�� �Ѵ�
//	while (t != NULL)
//	{
//		p = t;
//		if (t->data < key)
//		{
//			t = t->right;
//		}
//		else
//		{
//			t = t->left;
//		}
//	}
//	// �����Ҵ��� ���� ���ο� ��带 ����
//	TreeNode* new_TreeNode = (TreeNode*)malloc(sizeof(TreeNode));
//	new_TreeNode->data = key;
//	new_TreeNode->right = new_TreeNode->left = NULL;
//
//	// p�� NULL�� ��� Ʈ���� ������ ����ִ� ������ root�� ���ο� ���� ����
//	// NULL�� �ƴ� ��� �θ� ����Ű�� p�� ���� �������� ������ ����, ũ�� �����ʿ� ���ο� ��带 �̾��ش�
//	if (p->data < new_TreeNode->data)
//	{
//		p->right = new_TreeNode;
//	}
//	else if (p->data > new_TreeNode->data)
//	{
//		p->left = new_TreeNode;
//	}
//	else
//	{
//		t = new_TreeNode;
//	}
//}
//
//void delete_node(TreeNode** root, element key) {
//	TreeNode* p, * c, * t, * succ, * succ_p;
//
//	t = *root;
//	p = NULL;
//
//	// ���Կ��� t�� p�� �̿��� key���� �� ���ο� ����� �ڸ��� ã���� ��ó��
//	// �̹����� t�� p�� �̿��Ͽ� key���� data�� ������ ������ ��带 ã�´�
//	// ������ ��带 ã�� ��� p�� �����Ǵ� ����� �θ� t�� ������ ��带 ����Ų��
//	while (t != NULL && t->data != key) {
//		p = t;
//		t = (key < p->data) ? p->left : p->right;
//	}
//	if (t == NULL) return;
//
//	// ���� �� 3���� ���� ������
//	// 1. �����Ǵ� ��带 �������� ���ʰ� ������ �ڽ��� ��� NULL�� �� :
//	// t�� ������ ��带 ����Ű�Ƿ� p�� left�� right�� t�� ���� ���� ����Ű�� ���
//	// �ش� ��带 NULL�� �����ϸ� �ȴ� (t�� ����Ű�� ���� NULL�� �Ǿ�� �Ѵ�)
//	if (t->left == NULL && t->right == NULL)
//	{
//		if (p->left == t)
//		{
//			p->left = NULL;
//		}
//		else
//		{
//			p->right = NULL;
//		}
//	}
//
//
//	// 2. �����Ǵ� ��带 �������� ���� �Ǵ� ������ �ڽ� �� �ϳ��� NULL�� �� :
//	// �� �� NULL�� �ƴ� �ڽ��� c�� ����Ű�� �� ��
//	// t�� p�� ���� �Ǵ� �����ʿ� ��ġ�ϴ��� ã�� �� t�� c�� �ٲپ��ش�.
//	// �̶� t�� ���� �������� �ʾƵ� c�� ��尡 t�ڸ��� ��ġ�ϰ� �Ǿ� �ش� �ڸ���
//	// left�� right�� ��� NULL�� ���·� ������ �Ͱ� ������ ȿ���� ���̰� �ȴ�
//	// (������ �ʿ��� ��� ī���ϼ�)
//	else if (t->left == NULL || t->right == NULL)
//	{
//		if (t->left != NULL)
//		{
//			c = t->left;
//		}
//		if (t->right != NULL)
//		{
//			c = t->right;
//		}
//		if (p->left == t)
//		{
//			p->left = c;
//		}
//		else
//		{
//			p->right = c;
//		}
//	}
//	
//
//
//	// 3. �� �� NULL�� �ƴ� ��� :
//	// �����Ǵ� ��带 �������� �����ʿ��� �� ����, �� �����Ǵ� ��庸�� ū �� �� ���� ���� ���� �����Ǵ� ���� �ٲ۴�.
//	// �� ���� ������ ����� �Ǿ��� ū �� �� ���� ���� ���� �����ϸ� Ʈ���� ������ �����ϰ�
//	// �ٲ��� �ʰ� ���� Ž�� Ʈ���� ������ ������ �� �ְԵȴ�.
//	else {
//		succ_p = t;
//		succ = t->right;
//
//		// succ_p�� succ�� ����Ͽ� t�� p�� �̵��Ͽ��� ��ó�� succ_p�� �ٲپ�� �� ����� �θ�
//		// succ�� �ٲپ�� �� ��带 �����Ѿ� �Ѵ�
//		// �״��� succ_p�� �������� ���� �Ǵ� ������ �ڽ� �� succ�� ���� ã��
//		// �ش� �ڸ��� succ�� ������ �ڽ����� �ٲپ��ش�
//		// ���������� t�� succ�� ���� �ٲٰ� t�� succ�� ����Ű�� �� �� t�� �����Ѵ�
//
//		// ������ ���� ������ �Ÿ� �ѹ��� �����ϸ� �� õ��ϱ� �õ��ߴٴ� �Ϳ� ���Ǹ� ����
//		while (succ->left != NULL)
//		{
//			succ_p = succ;
//			succ = succ->left;
//		}
//		succ_p->left = succ->right;
//		t->data = succ->data;
//		t = succ;
//	}
//
//	remove(t);
//}
//
//void inorder(TreeNode* root)
//{
//	if (root) {
//		inorder(root->left);
//		printf("%d ", root->data);
//		inorder(root->right);
//	}
//}
//
//void display(TreeNode* node) {
//	printf("%d\n", node->data);
//	if (node->left == NULL) printf("NULL\n");
//	else printf("%d\n", node->left->data);
//	if (node->right == NULL)printf("NULL\n");
//	else printf("%d\n\n", node->right->data);
//}
//
//TreeNode n9 = { 6, NULL, NULL };
//TreeNode n10 = { 8, &n9, NULL };
//TreeNode n7 = { 1, NULL, NULL };
//TreeNode n8 = { 4, NULL, NULL };
//TreeNode n1 = { 3, &n7, &n8 };
//TreeNode n2 = { 5, &n1, &n10 };
//TreeNode n3 = { 16, NULL, NULL };
//TreeNode n4 = { 25, NULL, NULL };
//TreeNode n5 = { 20, &n3, &n4 };
//TreeNode n6 = { 15, &n2, &n5 };
//
//TreeNode* root = &n6;
//
//void main()
//{
//	//display(search1(root, 20));
//
//	//display(search2(root, 16));
//
//	inorder(root);
//	puts("");
//
//	insert_node(&root, 7);
//	puts("");
//
//	inorder(root);
//	puts("");
//
//
//	delete_node(&root, 16);
//	inorder(root);
//	puts("");
//
//	/*delete_node(&root, 6);
//	puts("");
//	inorder(root);*/
//
//	delete_node(&root, 5);
//	inorder(root);
//	puts("");
//}