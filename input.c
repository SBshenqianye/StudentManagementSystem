






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
	printf("\n�������¸�ʽ����ѧ���ɼ���\n");
	printf("���� ѧ�� ���Գɼ� ��ѧ�ɼ� Ӣ��ɼ� ���ĳɼ� �����ɼ�\n");
	printf("�磺С�� 20020204 100 140 125 120 98\n");

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
		printf("\n���ʻ�Ҫ����������\n");
		printf("1.����\t2.ֹͣ\n");
		fflush(stdin);
		scanf("%d",&i);
	}
	return i;
}



