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
#include <conio.h>


// �����Լ�

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

void key();
 // 1. ��ũ�η� �¿���ϸ� �����Ѵ�.
int main(void) 
{
   
    while (1) 
    {
        key();
    }
    return 0;

}

void Key()
{
    char c;
    if (_kbhit())
    {               // 2. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.
        c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
        if ((c == 0x58) || (c == 0x78))
        {
            printf("x\n");
        }
    }
}