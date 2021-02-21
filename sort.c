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
	printf("������Ҫ�������Ŀ��");
	printf("1.���򣨴Ӹߵ��ͣ�\t1");
	printf("2.���򣨴ӵ͵��ߣ�\t");

	fflush(stdin);
	scanf("%d", &choice);
	system("cls");
	printf("������ɣ���ѡ�񷵻ء�");
	return choice;
}

#include ".\sortcore.h"

static int Display(int *porder){
	int choice, Return_DisplayEnd=0;
	static int order;
	printf("\n---------------------------------STATISTICS---------------------------------\n\n\n");
	printf("������Ҫ�������Ŀ��\n");
	printf("0.����\t");
	printf("1.����\t");
	printf("2.��ѧ\t");
	printf("3.Ӣ��\t");
	printf("4.����\t");
	printf("5.����\t");
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




