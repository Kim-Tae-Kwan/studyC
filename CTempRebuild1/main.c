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
#include <conio.h>


// 메인함수

int stop = 0;

void Key();
 
int main(void) 
{ 
   
    while (1) 
    {
       
        Key();
        if (stop == 1)
            break;
        
    }
    return 0;

}

void Key()
{
    char c;
    
    
    if (_kbhit())
    {               
        c = _getch();           
        if ((c == 0x58) || (c == 0x78))
        {
            stop = 1;
        }
    }
}