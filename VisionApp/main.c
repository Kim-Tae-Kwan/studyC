/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, Structure ��ȯ�� �н�.
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
// �����Լ�
int main(void) 
{
    
   


    printf("�÷� �Է� : ");
    scanf("%lf%lf", &(robot.left), (&robot.right));
    printf("ó�� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
    exchange(&robot);
    printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);



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