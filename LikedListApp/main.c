/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 구조체 연결리스트 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
	int num;
	struct list* next;
};

// 메인함수
int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * cur;

	a.next = &b;
	b.next = &c;

	printf("head->num       : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);
	printf("head->next      : %p\n", head->next);
	printf("a.next          : %p\n", a.next);
	printf("b address       : %p\n", &b);
	printf("-------------------------------------\n");
	printf("list all : ");
	cur = head;
	while (cur != NULL)
	{
		printf("%5d", cur->num);
		cur = cur->next;
	}
	printf("\n");

	printf("b delete\n");
	a.next = &c;
	b.next = 0;

	cur = head;
	while (cur != NULL)
	{
		printf("%5d", cur->num);
		cur = cur->next;
	}
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}