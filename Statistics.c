#include ".\interface.h"



static int display();
static void GOOD();
static void FAIL();
static void AVERAGE();
extern int OrderNum;
extern struct Student aver;
extern struct Student good;
extern struct Student fail;
#include ".\statsticscore.h"


extern void STATICTICS(){
	GOOD();
	FAIL();
	AVERAGE();
}


extern void Statistics(){
	int a = 1;
	system("cls");
	while(1){
		if(a == 0){
			break;
		}
		a = display();
	}	
}

static int display(){
	int fword;
	printf("\n---------------------------------STATISTICS---------------------------------\n");
	
	printf("科目\t最高分\t最低分\t平均分\t优秀人数\t不及格人数\t最高分学生学号\n");
	sortComputer();
	printf("电脑\t%6.2lf\t%6.2lf\t%6.2lf\t%8.0lf\t%10.0lf\t%14ld\n", stu[0].computer, stu[OrderNum-1].computer, aver.computer/OrderNum, good.computer, fail.computer, stu[0].ID);
	sortMath();
	printf("数学\t%6.2lf\t%6.2lf\t%6.2lf\t%8.0lf\t%10.0lf\t%14ld\n", stu[0].math, stu[OrderNum-1].math, aver.math/OrderNum, good.math, fail.math, stu[0].ID);
	sortEnglish();
	printf("英语\t%6.2lf\t%6.2lf\t%6.2lf\t%8.0lf\t%10.0lf\t%14ld\n", stu[0].english, stu[OrderNum-1].english, aver.english/OrderNum, good.english, fail.english, stu[0].ID);
	sortChinese();
	printf("语文\t%6.2lf\t%6.2lf\t%6.2lf\t%8.0lf\t%10.0lf\t%14ld\n", stu[0].chinese, stu[OrderNum-1].chinese, aver.chinese/OrderNum, good.chinese, fail.chinese, stu[0].ID);
	sortPE();
	printf("体育\t%6.2lf\t%6.2lf\t%6.2lf\t%8.0lf\t%10.0lf\t%14ld\n", stu[0].PE, stu[OrderNum-1].PE, aver.PE/OrderNum, good.PE, fail.PE, stu[0].ID);

	
	
	
	
	printf("\n0.返回\n");
	scanf("%d", &fword);
	system("cls");
	return fword;
}



static void GOOD(){
	if( stu[OrderNum].computer >= 90.0){
		good.computer+=1;
	}
	if( stu[OrderNum].math >= 90.0){
		good.math+=1;
	}
	if( stu[OrderNum].english >= 90.0){
		good.english+=1;
	}
	if( stu[OrderNum].chinese >= 90.0){
		good.chinese+=1;
	}
	if( stu[OrderNum].PE >= 90.0){
		good.PE+=1;
	}
}

static void FAIL(){
	if( stu[OrderNum].computer < 60.0){
		fail.computer+=1;
	}
	if( stu[OrderNum].math < 60.0){
		fail.math+=1;
	}
	if( stu[OrderNum].english < 60.0){
		fail.english+=1;
	}
	if( stu[OrderNum].chinese < 60.0){
		fail.chinese+=1;
	}
	if( stu[OrderNum].PE < 60.0){
		fail.PE+=1;
	}
}


static void AVERAGE(){

	aver.computer+=stu[OrderNum].computer;

	aver.math+=stu[OrderNum].math;

	aver.english+=stu[OrderNum].english;

	aver.chinese+=stu[OrderNum].chinese;

	aver.PE+=stu[OrderNum].PE;

}