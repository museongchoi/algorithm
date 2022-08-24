#pragma once

#include <stdio.h>
#include <stdlib.h>

// 학생 정보 구조체
typedef struct {
	int id;
	int eng;
	int math;
}student;

typedef student element;

// 연결리스트 하나의 노드에 대한 구조체
typedef struct ListNode {
	element data;
	struct ListNode* link;
}ListNode;

// 연결리스트에 시작을 가리키는 구조체 포인터
typedef struct head {
	ListNode* head;
}Header;


// 함수 원형 선언
void sortClass(Header* head, element student); //입력받고 정렬하기
void deleteNode(Header* head, int id);
void print_list(Header list);//출력
void combine(Header* combine, Header list1, Header list2);//리스트 합치기