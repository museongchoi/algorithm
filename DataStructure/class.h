#pragma once

#include <stdio.h>
#include <stdlib.h>

// �л� ���� ����ü
typedef struct {
	int id;
	int eng;
	int math;
}student;

typedef student element;

// ���Ḯ��Ʈ �ϳ��� ��忡 ���� ����ü
typedef struct ListNode {
	element data;
	struct ListNode* link;
}ListNode;

// ���Ḯ��Ʈ�� ������ ����Ű�� ����ü ������
typedef struct head {
	ListNode* head;
}Header;


// �Լ� ���� ����
void sortClass(Header* head, element student); //�Է¹ް� �����ϱ�
void deleteNode(Header* head, int id);
void print_list(Header list);//���
void combine(Header* combine, Header list1, Header list2);//����Ʈ ��ġ��