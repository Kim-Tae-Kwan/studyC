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



int Key();
int res = 0;
 
int main(void) 
{ 
   
    while (1) 
    {
       
        res=Key();
        if (res == 1)
            break;
        
    }
    return 0;

}

int Key()
{
    char c;
    if (_kbhit())
    {               
        c = _getch();           
        if ((c == 0x58) || (c == 0x78))
        {
            return 1;
        }
    }
}