#include "class.h"

void sortClass(Header* head, element student)
{
	//head->head->data.math
	//구조체 공간 동적할당 data,link 입력 받기
	ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
	new_node->data = student;
	new_node->link = NULL;
	
	//p = *head

	//구조체의 시작부분을 가리키는 p,q
	ListNode* p;	//비교노드
	ListNode* q;	//이전노드
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
	ListNode* p; //list1의 비교노드
	ListNode* q; //list2의 비교노드
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

//결과
//class1
//(125 95 90) (128 75 50) (129 60 60) (134 88 65) (145 70 55)
//
//class2
//(115 95 90) (124 78 55) (135 65 70) (144 90 80) (147 80 85)