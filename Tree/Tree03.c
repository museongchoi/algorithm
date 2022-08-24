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
////순환 (재귀)
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
//// 반복
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
//	//t는 현위치, p는 부모노드
//	t = *root;
//	p = NULL;
//
//	// t와 p를 이용해서 key값을 가진 새로운 노드가 들어갈 위치를 잡아준다
//	// 연결리스트에서 p와 q를 사용하여 link를 바꾸어준 것과 비슷한 원리라고 생각하면 된다.
//	// 반복문이 끝나게 되면 p는 새로운 노드가 들어갈 자리의 부모를 가리키고 있어야 한다
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
//	// 동적할당을 통해 새로운 노드를 생성
//	TreeNode* new_TreeNode = (TreeNode*)malloc(sizeof(TreeNode));
//	new_TreeNode->data = key;
//	new_TreeNode->right = new_TreeNode->left = NULL;
//
//	// p가 NULL일 경우 트리가 완전히 비어있는 것으로 root를 새로운 노드로 설정
//	// NULL이 아닌 경우 부모를 가리키는 p의 값을 기준으로 작으면 왼쪽, 크면 오른쪽에 새로운 노드를 이어준다
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
//	// 삽입에서 t와 p를 이용해 key값이 들어갈 새로운 노드의 자리를 찾아준 것처럼
//	// 이번에도 t와 p를 이용하여 key값을 data로 가지는 삭제할 노드를 찾는다
//	// 삭제할 노드를 찾은 경우 p는 삭제되는 노드의 부모를 t는 삭제될 노드를 가리킨다
//	while (t != NULL && t->data != key) {
//		p = t;
//		t = (key < p->data) ? p->left : p->right;
//	}
//	if (t == NULL) return;
//
//	// 삭제 시 3개의 경우로 나뉜다
//	// 1. 삭제되는 노드를 기준으로 왼쪽과 오른쪽 자식이 모두 NULL일 때 :
//	// t는 삭제될 노드를 가리키므로 p의 left와 right중 t와 같은 것을 가리키는 경우
//	// 해당 노드를 NULL로 설정하면 된다 (t가 가리키는 노드는 NULL이 되어야 한다)
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
//	// 2. 삭제되는 노드를 기준으로 왼쪽 또는 오른쪽 자식 중 하나가 NULL일 때 :
//	// 둘 중 NULL이 아닌 자식을 c가 가리키게 한 뒤
//	// t가 p의 왼쪽 또는 오른쪽에 위치하는지 찾은 후 t를 c로 바꾸어준다.
//	// 이때 t를 따로 삭제하지 않아도 c의 노드가 t자리에 위치하게 되어 해당 자리의
//	// left와 right는 모두 NULL인 상태로 삭제한 것과 동일한 효과를 보이게 된다
//	// (설명이 필요한 경우 카톡하셈)
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
//	// 3. 둘 다 NULL이 아닌 경우 :
//	// 삭제되는 노드를 기준으로 오른쪽에서 맨 왼쪽, 즉 삭제되는 노드보다 큰 값 중 가장 작은 값을 삭제되는 노드와 바꾼다.
//	// 그 다음 복사의 대상이 되었던 큰 값 중 가장 작은 값을 삭제하면 트리의 구조를 복잡하게
//	// 바꾸지 않고 이진 탐색 트리의 구조를 유지할 수 있게된다.
//	else {
//		succ_p = t;
//		succ = t->right;
//
//		// succ_p와 succ를 사용하여 t와 p가 이동하였던 것처럼 succ_p는 바꾸어야 할 노드의 부모를
//		// succ는 바꾸어야 할 노드를 가리켜야 한다
//		// 그다음 succ_p를 기준으로 왼쪽 또는 오른쪽 자식 중 succ인 것을 찾고
//		// 해당 자리에 succ의 오른쪽 자식으로 바꾸어준다
//		// 마지막으로 t와 succ의 값을 바꾸고 t는 succ를 가리키게 한 뒤 t를 삭제한다
//
//		// 솔직히 말로 설명한 거를 한번에 이해하면 넌 천재니까 시도했다는 것에 의의를 두자
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