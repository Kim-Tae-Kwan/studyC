/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Business_card
{
	int card_number;
	char name[80];
	int phon_number;
	char email[80];
} card;

int index = 0;
card input_business_card();
void show_all_cards(card* list);
void search_business_card(card* list, int num);
void edit_business_card(card* list);
// 메인함수
int main(void)
{
	
	card card_list[50];
	while (1)
	{


		int insert;
		printf("1번 입력, 2번 수정, 3번 삭제, 4번 전체출력, 5번 검색, 6번 종료\n");
		scanf("%d", &insert);
		switch (insert)
		{
		case 1:
			card_list[index - 1] = input_business_card(); break;
		case 2:
			edit_business_card(card_list, index); break;
		case 3:
		case 4:
			show_all_cards(card_list); break;
		case 5:
			search_business_card(card_list, index); break;

		default:
			break;
		}
	}


	system("pause");
	return EXIT_SUCCESS;
}
card input_business_card()
{
	int card_number;
	char name[80];
	int phon_number;
	char email[80];
	card newcard;
	//newcard = (card*)malloc(sizeof(card));

	printf("이름을 입력하세요=>");
	scanf("%s", name);
	//getchar();
	printf("폰 번호를 입력하세요=>");
	scanf("%d", &phon_number);
	printf("이메일을 입력하세요=>");
	scanf("%s", email);

	strcpy(newcard.name, name);
	newcard.phon_number = phon_number;
	strcpy(newcard.email, email);
	newcard.card_number = ++index;

	return newcard;


}

void show_all_cards(card* list)
{


	for (int i = 0; i < index; i++)
	{
		printf("명함번호 : %d\n", (list+i)->card_number);
		printf("이름     : %s\n", (list+i)->name);
		printf("폰번호   : %d\n", (list + i)->phon_number);
		printf("이메일   : %s\n", (list + i)->email);
	}



}

void search_business_card(card*list,int num)
{
	int search_number;

	printf("명함 번호를 입력하세요=>");
	scanf("%d", &search_number);

	if (search_number > num)
	{
		printf("명함 번호가 없습니다.\n");
		return 0;
	}

	for (int i = 0; i < num; i++)
	{
		if ((list + i)->card_number == search_number)
		{
			printf("명함번호 : %d\n", (list + i)->card_number);
			printf("이름     : %s\n", (list + i)->name);
			printf("폰번호   : %d\n", (list + i)->phon_number);
			printf("이메일   : %s\n", (list + i)->email);
		}
	}


}

void edit_business_card(card* list,int num)
{
	int card_number;
	int phon_number;
	char email[80];


	printf("수정할 명함의 번호를 입력하세요=>");
	scanf("%d", &card_number);
	if (card_number > num)
	{
		printf("명함 번호가 없습니다.\n");
		return 0;
	}
	printf("폰번호를 다시 입력하세요=>");
	scanf("%d", &phon_number);
	printf("이메일을 다시 입력하세요=>");
	scanf("%s", email);
	for (int i = 0; i < index;i++)
	{
		if ((list + i)->card_number == card_number)
		{
			(list + i)->phon_number = phon_number;
			strcpy((list + i)->email ,email);
		}
	}



}