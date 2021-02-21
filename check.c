
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
		printf("目前无数据。\n");
	}
	else {
		printf("\n\n---------------------------------------------------------------------------------------\n");
		printf("姓名\t\t学号\t电脑成绩\t数学成绩\t英语成绩\t语文成绩\t体育成绩\n");
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
		printf("%s\t%4d\t%6.0lf人\t%6.0lf人\t%6.0lf人\t%6.0lf人\t%6.0lf人 \n", good.name, good.ID, good.computer, good.math, good.english, good.chinese, good.PE);
		printf("%s\t%4d\t%6.0lf人\t%6.0lf人\t%6.0lf人\t%6.0lf人\t%6.0lf人 \n", fail.name, fail.ID, fail.computer, fail.math, fail.english, fail.chinese, fail.PE);
	}

	printf("接下来您要：\n");
	printf("0.返回");
	if(OrderNum == 0){
		printf("\n");
	}
	if(OrderNum != 0){
		printf("\t1.排序");
		printf("\t2.统计\n");
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


