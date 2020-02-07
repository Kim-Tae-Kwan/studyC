/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체 포인터 학습.
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

// 메인함수
int main(void)
{
	/*struct score kim = { 90,50,60 };
	struct score* ps = &kim;

	printf("%d\n", sizeof(kim));
	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);*/

	//struct address list[] = {
	//	{"김태관",27,"010-1234-5678","범일동"},
	//	{"손유진",25,"010-1234-5678","가야동"},
	//	{"변승재",30,"010-1234-5678","괴정동"},
	//	{"송상근",28,"010-1234-5678","대연동"},
	//	{"송정윤",28,"010-1234-5678","남천동"}
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
	//printf("나이 많은 사람 : %s\n", name);

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