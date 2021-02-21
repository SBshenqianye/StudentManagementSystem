






#include ".\interface.h"
#define NOT 1
#define EXIT 2

extern int OrderNum;



static int Input();
extern void STATICTICS();


extern void InputData(){
	int i=1;



	while(1){
		if(i == 2){
			break;
		}

		i = Input();
	}
}



static int Input(){
	int i=0;
	system("cls");
	printf("\n--------------------------------INPUT--------------------------------\n\n");
	printf("\n请以以下格式输入学生成绩：\n");
	printf("姓名 学号 电脑成绩 数学成绩 英语成绩 语文成绩 体育成绩\n");
	printf("如：小明 20020204 100 140 125 120 98\n");

	fflush(stdin);
	scanf("%s %d %lf %lf %lf %lf %lf", &stu[OrderNum].name, &stu[OrderNum].ID, &stu[OrderNum].computer, &stu[OrderNum].math, &stu[OrderNum].english, &stu[OrderNum].chinese, &stu[OrderNum].PE);
	STATICTICS();
	OrderNum++;
	while(1){
		if( i == 1 || i == 2){
			break;
		}
		system("cls");
		printf("\n--------------------------------INPUT--------------------------------\n\n");
		printf("\n请问还要继续输入吗？\n");
		printf("1.继续\t2.停止\n");
		fflush(stdin);
		scanf("%d",&i);
	}
	return i;
}



