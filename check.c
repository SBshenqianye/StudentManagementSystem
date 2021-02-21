
#include ".\interface.h"


extern int OrderNum;
extern struct Student aver;
extern struct Student good;
extern struct Student fail;
extern int SORT();
extern void Statistics();

static int display();

extern void CheckData(){
	int i = 999;

	while(1){
		if(i == 0){
			break;
		}
		i = display();
	}
}

static int display(){
	int i,n;
	static int order = 1;
	printf("\n--------------------------------CHECK--------------------------------\n");
	if(OrderNum == 0){
		printf("Ŀǰ�����ݡ�\n");
	}
	else {
		printf("\n\n---------------------------------------------------------------------------------------\n");
		printf("����\t\tѧ��\t���Գɼ�\t��ѧ�ɼ�\tӢ��ɼ�\t���ĳɼ�\t�����ɼ�\n");
	}
	if(order == 1){
		
		for(i=0;i<OrderNum;i++){			
			printf("%s\t%12ld\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf \n", stu[i].name, stu[i].ID, stu[i].computer, stu[i].math, stu[i].english, stu[i].chinese, stu[i].PE);
		}
	}
	else if(order == 2){
		for(i=OrderNum-1;i>=0;i--){			
			printf("%s\t%4d\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf \n", stu[i].name, stu[i].ID, stu[i].computer, stu[i].math, stu[i].english, stu[i].chinese, stu[i].PE);
		}
	}
	if(OrderNum != 0){
		printf("---------------------------------------------------------------------------------------\n");
		printf("%s\t%4d\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf\t%8.2lf \n", aver.name, aver.ID, aver.computer/OrderNum, aver.math/OrderNum, aver.english/OrderNum, aver.chinese/OrderNum, aver.PE/OrderNum);
		printf("%s\t%4d\t%6.0lf��\t%6.0lf��\t%6.0lf��\t%6.0lf��\t%6.0lf�� \n", good.name, good.ID, good.computer, good.math, good.english, good.chinese, good.PE);
		printf("%s\t%4d\t%6.0lf��\t%6.0lf��\t%6.0lf��\t%6.0lf��\t%6.0lf�� \n", fail.name, fail.ID, fail.computer, fail.math, fail.english, fail.chinese, fail.PE);
	}

	printf("��������Ҫ��\n");
	printf("0.����");
	if(OrderNum == 0){
		printf("\n");
	}
	if(OrderNum != 0){
		printf("\t1.����");
		printf("\t2.ͳ��\n");
	}

	fflush(stdin);
	scanf("%d", &n);
	system("cls");
	if( n == 1){
		order = SORT();
	}
	else if(n == 2){
		Statistics();
	}
	return n;
}


