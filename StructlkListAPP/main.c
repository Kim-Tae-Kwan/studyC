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

typedef struct node {
	
	int index;
	double data;
	struct node* next;
} node;
void insertNode();


node* first = NULL, * last = NULL;
node* newnode;
int i = 1;
double j = 10.1;

// �����Լ�
int main(void)
{
	
	while (1)
	{
		insertNode();

		//deleteNode()
		
		int index;
		scanf("%d", &index);
		
		
		
		
		switch (index)
		{
		
		default:
		{
			printf("%d��°�� ����ü�� �����ϴ�.\n", index);
			break;
		}
		}










	}
	free(newnode);
	system("pause");
	return EXIT_SUCCESS;
}

void insertNode()
{
	newnode = (node*)malloc(sizeof(node));
	newnode->index = i;
	newnode->data = j;

	if (first == NULL)
	{
		first = newnode;
	}
	else if (last == NULL)
	{
		first->next = newnode;
		last = newnode;
	}
	else
	{
		last->next = newnode;
		last = newnode;
	}
	i++;
	j += 10.1;
}