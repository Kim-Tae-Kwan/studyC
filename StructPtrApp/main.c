/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü ������ �н�.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>

struct score
{
	int kor;
	int eng;
	int math;

};

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
struct list
{
	int num;
	struct list* next;
};

// �����Լ�
int main(void)
{
	/*struct score kim = { 90,50,60 };
	struct score* ps = &kim;

	printf("%d\n", sizeof(kim));
	printf("���� : %d\n", (*ps).kor);
	printf("���� : %d\n", ps->eng);
	printf("���� : %d\n", ps->math);*/

	//struct address list[] = {
	//	{"���°�",27,"010-1234-5678","���ϵ�"},
	//	{"������",25,"010-1234-5678","���ߵ�"},
	//	{"������",30,"010-1234-5678","������"},
	//	{"�ۻ��",28,"010-1234-5678","�뿬��"},
	//	{"������",28,"010-1234-5678","��õ��"}
	//};
	//char name[20];
	//for (int i = 0; i < sizeof(list)/sizeof(list[0]); i++)
	//{
	//	printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	//}
	//strcpy(name, list[0].name);
	//int max =0;
	//for (int i = 0; i < 4; i++)
	//{
	//	if (max < list[i].age)
	//	{
	//		max = list[i].age;
	//		strcpy(name, list[i].name);
	//	}
	//}
	////if (list[0].age > list[1].age) name = list[0].name;
	//printf("���� ���� ��� : %s\n", name);

	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * cur;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", (*head).num);
	printf("head->next->num : %d\n", (*head).next->num);

	printf("list call : ");
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