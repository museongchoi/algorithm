#include "class.h"

void sortClass(Header* head, element student)
{
	//head->head->data.math
	//����ü ���� �����Ҵ� data,link �Է� �ޱ�
	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	new_node->data = student;
	new_node->link = NULL;
	
	//p = *head

	//����ü�� ���ۺκ��� ����Ű�� p,q
	ListNode* p;	//�񱳳��
	ListNode* q;	//�������
	p = head->head;
	q = NULL;
	if (p == NULL)
	{
		head->head = new_node;
	}
	else if (new_node->data.id < p->data.id)
	{
		new_node->link = head->head;
		head->head = new_node;
	}
	else
	{		
		while (p != NULL)
		{
			if (new_node->data.id < p->data.id)
			{
				break;
			}
			q = p;
			p = p->link;
		}
		new_node->link = q->link;
		q->link = new_node;
	}
}

void deleteNode(Header* list, int id)
{
	ListNode* p;
	ListNode* q;
	p = list->head;
	q = list->head;

	while (p != NULL)
	{
		if (p->data.id == id)
		{
			q->link = p->link;
			delete p;
			break;
		}
		q = p;
		p = p->link;
	}
}

void print_list(Header list)
{
	ListNode* p;
	p = list.head;
	while (p != NULL)
	{
		printf("(%d %d %d) ", p->data.id, p->data.eng, p->data.math);
		p = p->link;
	}

	puts("");
}

void combine(Header* combine, Header list1, Header list2)
{
	ListNode* p; //list1�� �񱳳��
	ListNode* q; //list2�� �񱳳��
	p = list1.head;
	q = list2.head;
	
	while (p != NULL)
	{
		sortClass(combine, p->data);
		p = p->link;
	}

	while (q != NULL)
	{
		sortClass(combine, q->data);
		q = q->link;
	}
}

//���
//class1
//(125 95 90) (128 75 50) (129 60 60) (134 88 65) (145 70 55)
//
//class2
//(115 95 90) (124 78 55) (135 65 70) (144 90 80) (147 80 85)