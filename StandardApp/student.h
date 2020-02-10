#pragma once

#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed !"
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")
#define SUM(a,b) (a+b)
#define MUL(a,b) (a*b)
#define VER 7
#define BIT 16




#define PRINT_EXPR(x) printf(#x " = %d\n",x)
#define NAME_CAT(x,y) (x##y)





struct student {

	int num;
	char name[20];
};

typedef struct student Student;

void print()
{
	printf("-------------------------\n");
}

