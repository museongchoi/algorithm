#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode
{
	element data;
	struct ListNode* link;
}Node;

Node* create_node(element data, Node* link)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = data;
	new_node->link = link;
	return new_node;
}

void insert_node(Node** phead, Node* p, Node* new_node)
{
	// 리스트가 완전히 비어있을 때
	if (*phead == NULL)
	{
		*phead = new_node;
		new_node->link = NULL;
	}

	// 리스트의 맨 처음에 삽입을 하고 싶을 때
	else if (p == NULL)
	{
		new_node->link = *phead;
		*phead = new_node;
	}
	// 그 외
	else
	{
		new_node->link = p->link;
		p->link = new_node;
	}
}

void remove_node(Node** phead, Node* p, Node* tmp)
{
	//List맨 앞 삭제
	if (p == NULL)
	{
		(*phead) = tmp->link;
		delete tmp;
	}
	//나머지 모든 경우
	else
	{
		p->link = tmp->link;
		delete tmp;
	}
}

void display(Node* head)
{
	Node* p;
	p = head;
	while (p != NULL) 
	{
		printf("%d ", p->data);
		p = p->link;
	}
	puts("");
}

Node* search_node(Node* head, int i)
{
	Node* p;
	p = head;
	while (p != NULL)
	{
		if (p->data == i)
		{
			return p;
		}
		p = p->link;
	}
}

Node* concat(Node* head1, Node* head2)
{
	Node* p;
	p = head1;
	while (p != NULL)
	{
		p = p->link;
		if (p->link == NULL)
		{
			p->link = head2;
			return head1;
		}
	}
}


int main()
{
	Node* list1 = NULL;
	Node* list2 = NULL;
	Node* list3 = NULL;

	for (int i = 1; i <= 3; i++)
	{
		//1~3을 list1에 삽입
		insert_node(&list1, NULL, create_node(i, NULL));
		//10~30을 list2에 삽입
		insert_node(&list2, NULL, create_node(i * 10, NULL));
	}

	//list1에 4를 삽입
	insert_node(&list1, search_node(list1, 1), create_node(4, NULL));

	display(list1); //출력결과 : 3 2 1 4
	display(list2); //출력결과 : 30 20 10
	puts("");

	//lsit1의 맨 앞 값을 삭제
	remove_node(&list1, NULL, list1);
	//list2에서 30뒤에 있는 20을 삭제
	remove_node(&list2, search_node(list2, 30), search_node(list2, 20));

	display(list1); //출력결과 : 2 1 4
	display(list2); //출력결과 : 30 10
	puts("");

	//list1과 list2를 연결
	list3 = concat(list1, list2);

	display(list3); //출력결과 : 2 1 3 30 10

	return 0;
}