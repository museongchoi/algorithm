//����Ž��
#include <stdio.h>
#include <stdlib.h>

typedef int element;

//Ʈ�� ����ü
typedef struct Tree {
	element data;
	struct Tree* left;
	struct Tree* right;
	struct Tree* link;
}TreeNode;

//ť ����ü
typedef struct Queue {
	TreeNode* front;
	TreeNode* rear;
}QueueType;

//ť �ʱ�ȭ �Լ�
void init(QueueType* q)
{
	q->front = NULL;
	q->rear = NULL;
}

//ť�� ����ִ� ���θ� Ȯ�� �Լ�
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

//ť�� Ʈ�� ��带 �ϳ� �����ϴ� �Լ�
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

//ť�� �� �տ� �ִ� Ʈ�� ��� �ϳ��� ��ȯ �� �����ϴ� �Լ�
//�� �տ� �ִ� Ʈ�� ��带 ���ο� ������ ����
TreeNode* dequeue(QueueType* q)
{
	//���� �Ҵ�
	TreeNode* new_TreeNode = (TreeNode*)malloc(sizeof(TreeNode));
	new_TreeNode->data = q->front->data;
	new_TreeNode->left = q->front->left;
	new_TreeNode->right = q->front->right;
	new_TreeNode->link = NULL;

	TreeNode* tmp;
	tmp = q->front;
	//ť �ȿ� ��尡 �ϳ��ۿ� �������� ������ rear, front �̵� ��� ���� ���� ����Ű�� �Ѵ�
	if (q->rear == q->front)
	{
		q->rear = NULL;
	}
	q->front = q->front->link;
	delete tmp;
	return new_TreeNode;
}

//������ȸ�Ͽ� Ʈ���� Ž���ϴ� �Լ�
//������ ������ �Լ��� �����ص� �Ǹ� �����ϴ� �ǹ̷� �ٽ� �ۼ��Ͽ��� ��
void inorder(TreeNode* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

//������ȸ
void preorder(TreeNode* root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

//������ȸ
void postorder(TreeNode* root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}

//�������� Ž���� �ϴ� �Լ�
void level_order(TreeNode* root)
{
	QueueType q;
	init(&q);
	enqueue(&q, root);
	while (is_empty(&q) == 0)
	{
		//�Լ� ȣ�� �� ��ȯ �� �� ����, ���� �Ҵ�
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

//�����Ҵ� �Լ�ȣ�� �� ��ȯ ���� ����ϱ�!!!!!

//Ʈ������
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

