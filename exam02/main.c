/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
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
int count = 0;
card input_business_card();
void show_all_cards(card* list);
void search_business_card(card* list, int num);
void edit_business_card(card* list);
void delete_business_card(card* list);
// �����Լ�
int main(void)
{
	FILE* fp;
	card card_list[50];
	while (1)
	{
		

		int insert;
		printf("1�� �Է�, 2�� ����, 3�� ����, 4�� ��ü���, 5�� �˻�, 6�� ���� : ");
		scanf("%d", &insert);
		switch (insert)
		{
		case 1:
			card_list[index - 1] = input_business_card(card_list); break;
		case 2:
			edit_business_card(card_list, index); break;
		case 3:
			delete_business_card(card_list); break;
		case 4:
			show_all_cards(card_list); break;
		case 5:
			search_business_card(card_list, index); break;
		case 6:
		{
			fp = fopen("card_data.txt", "w");
			if (fp = NULL)
			{
				printf("��� ������ ���� �� �Ͽ����ϴ�.\n");
				break;
			}

			for (int i = 0; i < index;i++) {

				fprintf(fp, "���Թ�ȣ : %d\n", card_list[i].card_number);
				fprintf(fp, "�̸�     : %s\n", card_list[i].name);
				fprintf(fp, "����ȣ   : %d\n", card_list[i].phon_number);
				fprintf(fp, "�̸���   : %s\n", card_list[i].email);
			}

			fclose(fp);
			exit(1);
		}
		default:
			break;
		}
		printf("\n");
	}


	system("pause");
	return EXIT_SUCCESS;
}
card input_business_card(card* list)
{
	int card_number;
	char name[80];
	int phon_number;
	char email[80];
	card newcard;


	printf("�̸��� �Է��ϼ���=>");
	scanf("%s", name);
	//getchar();
	printf("�� ��ȣ�� �Է��ϼ���=>");
	scanf("%d", &phon_number);
	printf("�̸����� �Է��ϼ���=>");
	scanf("%s", email);

	for (int i = 0; i < sizeof(list); i++)
	{
		if ((list + i)->name == name && (list + i)->phon_number == phon_number)
		{
			printf("������ ������ �ֽ��ϴ�.\n");
			exit(1);
		}
	}

	strcpy(newcard.name, name);
	newcard.phon_number = phon_number;
	strcpy(newcard.email, email);
	newcard.card_number = ++index;
	count++;

	return newcard;
}

void show_all_cards(card* list)
{


	for (int i = 0; i < count; i++)
	{
		printf("���Թ�ȣ : %d\n", (list + i)->card_number);
		printf("�̸�     : %s\n", (list + i)->name);
		printf("����ȣ   : %d\n", (list + i)->phon_number);
		printf("�̸���   : %s\n", (list + i)->email);
		printf("\n");
	}



}

void search_business_card(card* list, int num)
{
	int search_number;

	printf("���� ��ȣ�� �Է��ϼ���=>");
	scanf("%d", &search_number);

	if (search_number > num)
	{
		printf("���� ��ȣ�� �����ϴ�.\n");
		return 0;
	}

	for (int i = 0; i < num; i++)
	{
		if ((list + i)->card_number == search_number)
		{
			printf("���Թ�ȣ : %d\n", (list + i)->card_number);
			printf("�̸�     : %s\n", (list + i)->name);
			printf("����ȣ   : %d\n", (list + i)->phon_number);
			printf("�̸���   : %s\n", (list + i)->email);
			printf("\n");
		}
	}


}

void edit_business_card(card* list, int num)
{
	int card_number;
	int phon_number;
	char email[80];


	printf("������ ������ ��ȣ�� �Է��ϼ���=>");
	scanf("%d", &card_number);
	if (card_number > num)
	{
		printf("���� ��ȣ�� �����ϴ�.\n");
		return 0;
	}
	printf("����ȣ�� �ٽ� �Է��ϼ���=>");
	scanf("%d", &phon_number);
	printf("�̸����� �ٽ� �Է��ϼ���=>");
	scanf("%s", email);
	for (int i = 0; i < index; i++)
	{
		if ((list + i)->card_number == card_number)
		{
			(list + i)->phon_number = phon_number;
			strcpy((list + i)->email, email);
		}
	}



}

void delete_business_card(card* list)
{
	int delete_number;
	card temp;
	show_all_cards(list);

	printf("���� ��ų ���� ��ȣ�� �Է��ϼ���=>");
	scanf("%d", &delete_number);

	for (int i = 0; i < index; i++)
	{
		if ((list + i)->card_number == delete_number)
		{
			
			for (int j = 0; j < index; j++)
			{
				temp = *(list + i + j);
				*(list + i + j) = *(list + i + j + 1);
			}
			count--;

		}
	}
	
	printf("���Թ�ȣ�� �´� ������ �����ϴ�.\n");

}