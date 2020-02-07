/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, Structure 반환값 학습.
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - KimTK.
*/

#include <stdio.h>
#include <stdlib.h>
void exchange(struct vision* robot);

struct vision
{
    double left;
    double right;
}robot;
// 메인함수
int main(void) 
{
    
   


    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), (&robot.right));
    printf("처음 시력 : %.1lf %.1lf\n", robot.left, robot.right);
    exchange(&robot);
    printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);



	system("pause");
	return EXIT_SUCCESS;
}

void exchange(struct vision *robot)
{
    double temp;
    temp = (*robot).left;
    (*robot).left = (*robot).right;
    (*robot).right = temp;

   
}