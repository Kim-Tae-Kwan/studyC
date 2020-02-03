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

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

void key();
 // 1. 매크로로 좌우상하를 설정한다.
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
    {               // 2. while문안에서 키보드 눌렸을 시 if문이 실행된다.
        c = _getch();           // 3. 방향키가 입력됬을 때 224 00 이 버퍼에 있다. 224부터 빼준다. 
        if ((c == 0x58) || (c == 0x78))
        {
            printf("x\n");
        }
    }
}