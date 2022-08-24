//계층탐색
#include <stdio.h>
#include <stdlib.h>

typedef int element;

//트리 구조체
typedef struct Tree {
	element data;
	struct Tree* left;
	struct Tree* right;
	struct Tree* link;
}TreeNode;

//큐 구조체
typedef struct Queue {
	TreeNode* front;
	TreeNode* rear;
}QueueType;

//큐 초기화 함수
void init(QueueType* q)
{
	q->front = NULL;
	q->rear = NULL;
}

//큐가 비어있는 여부를 확인 함수
int is_empty(QueueType* q)
{
	if (q->front == NULL && q->rear == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//큐에 트리 노드를 하나 삽입하는 함수
void enqueue(QueueType* q, TreeNode* ptr)
{
	TreeNode* new_TreeNode = (TreeNode*)malloc(sizeof(TreeNode));
	new_TreeNode->data = ptr->data;
	new_TreeNode->left = ptr->left;
	new_TreeNode->right = ptr->right;
	new_TreeNode->link = NULL;

	if (is_empty(q) == 1)
	{
		q->front = new_TreeNode;
		q->rear = new_TreeNode;
	}
	else
	{
		q->rear->link = new_TreeNode;
		q->rear = new_TreeNode;
	}
}

//큐에 맨 앞에 있는 트리 노드 하나를 반환 및 삭제하는 함수
//맨 앞에 있는 트리 노드를 새로운 공간에 저장
TreeNode* dequeue(QueueType* q)
{
	//공간 할당
	TreeNode* new_TreeNode = (TreeNode*)malloc(sizeof(TreeNode));
	new_TreeNode->data = q->front->data;
	new_TreeNode->left = q->front->left;
	new_TreeNode->right = q->front->right;
	new_TreeNode->link = NULL;

	TreeNode* tmp;
	tmp = q->front;
	//큐 안에 노드가 하나밖에 존재하지 않을때 rear, front 이동 방법 같은 곳을 가르키게 한다
	if (q->rear == q->front)
	{
		q->rear = NULL;
	}
	q->front = q->front->link;
	delete tmp;
	return new_TreeNode;
}

//중위순회하여 트리를 탐색하는 함수
//이전에 구현한 함수를 복붙해도 되며 복습하는 의미로 다시 작성하여도 됨
void inorder(TreeNode* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

//전위순회
void preorder(TreeNode* root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

//후위순회
void postorder(TreeNode* root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

//계층별로 탐색을 하는 함수
void level_order(TreeNode* root)
{
	QueueType q;
	init(&q);
	enqueue(&q, root);
	while (is_empty(&q) == 0)
	{
		//함수 호출 후 반환 된 값 저장, 공간 할당
		TreeNode* c;
		c = dequeue(&q);
		if (c->left != NULL)
		{
			enqueue(&q, c->left);
		}
		if (c->right != NULL)
		{
			enqueue(&q, c->right);
		}
		printf("%d ", c->data);
	}
}

//공간할당 함수호출 후 반환 저장 기억하기!!!!!

//트리구조
TreeNode n1 = { 1, NULL, NULL };
TreeNode n2 = { 4, &n1, NULL };
TreeNode n3 = { 1, NULL, NULL };
TreeNode n4 = { 2, NULL, NULL };
TreeNode n5 = { 2, &n3, &n4 };
TreeNode n6 = { 1, &n2, &n5 };
TreeNode* root = &n6;


int main()
{
	level_order(root);
	puts("\n");

	preorder(root);

	puts("\n");
}

