#include ".\interface.h"



extern int OrderNum;
extern struct Student aver;
extern struct Student good;
extern struct Student fail;

static int Display(int *porder);
static void HighToLow();
static void LowToHigh();
static int sortComputer();



extern int SORT(){
	int exit = 1, order = 1;
	while(1){
		if(exit == 0){
			break;
		}
		exit = Display(&order);
	}

	return order;
}


extern int UporDown(){
	int choice;
	system("cls");
	printf("\n---------------------------------STATISTICS---------------------------------\n\n\n");
	printf("请输入要排序的项目：");
	printf("1.降序（从高到低）\t1");
	printf("2.升序（从低到高）\t");

	fflush(stdin);
	scanf("%d", &choice);
	system("cls");
	printf("排序完成，请选择返回。");
	return choice;
}

#include ".\sortcore.h"

static int Display(int *porder){
	int choice, Return_DisplayEnd=0;
	static int order;
	printf("\n---------------------------------STATISTICS---------------------------------\n\n\n");
	printf("请输入要排序的项目：\n");
	printf("0.返回\t");
	printf("1.电脑\t");
	printf("2.数学\t");
	printf("3.英语\t");
	printf("4.语文\t");
	printf("5.体育\t");
	fflush(stdin);
	scanf("%d", &choice);
	switch(choice){
	case 0:
		system("cls");
		break;
	case 1:
		order = sortComputer();
		break;
	case 2:
		order = sortMath();
		break;
	case 3:
		order = sortEnglish();
		break;
	case 4:
		order = sortChinese();
		break;
	case 5:
		order = sortPE();
		break;
	}
	*porder = order;

	return choice;
}




