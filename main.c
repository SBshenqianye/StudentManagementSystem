
//学生：学号，计算机分数，数学分数，英语分数，语文分数，体育分数
//最高分，最低分，平均分，优秀人数，不及格人数，平均成绩排序
//表格输出：科目 最高分 最低分 平均分 优秀人数 不及格人数 最高分学生学号
/*
程序编写要求如下：
（1）分析程序功能设计要求，按照模块化程序设计的方法，划分各功能模块；
（2）分析程序中所涉及的各种数据，并选择适当的数据类型来表示；
（3）分析各个模块之间的接口，完成函数原型的设计，说明函数完成的功能、所需参数和返回值。
比如：
/**************************************************
//函数功能：显示菜单并返回选择的菜单编号
//函数原型：int Menu(void);
//函数参数：无
//返回值：用户选择的菜单编号
***************************************************/
/*
（4）每个模块用一个单独的 c 文件实现，以多文件方式实现整个设计，每个文件及函数的参考设
计如下表 7-5 所示；
（5）用菜单的形式组织各功能模块。
*/


#include ".\interface.h"

#define YES 1
#define NO 0
#define NOT 0

int OrderNum = 0;
extern struct Student aver = {"平均分", 0, 0, 0, 0, 0, 0};
extern struct Student good = {"优秀", 0, 0, 0, 0, 0, 0};
extern struct Student fail = {"不及格", 0, 0, 0, 0, 0, 0};

static int MainMenu();
static int EnterUI();
extern void InputData();
extern void CheckData();
extern void StaticScore();




int main(){

	int CloseOrNot=NO;


	while(CloseOrNot == NO){
	CloseOrNot = MainMenu();
	system("cls");
	}
	printf("感谢使用本程序。\n");
	


	return 0;
}



/**************************************************
//函数功能：显示进入or退出菜单并返回选择的菜单编号
//函数原型：int MainMenu();
//函数参数：无
//返回值：用户选择的菜单编号
***************************************************/
static int MainMenu(){							
	int SelectResults,CloseOrNot = NO;//NO则不关

	printf("\n---------------------------------MAIN MENU---------------------------------\n\n\n");
	printf("\t\t\t\t0.退出系统\n");
	printf("\t\t\t\t1.登录系统\n");
	printf("\t\t\t\t请输入序号以选择操作：");
	fflush(stdin);
	scanf("%d",&SelectResults);
	if( SelectResults == 1){
		int CloseOrNot_E = NO;
		while( CloseOrNot_E == NO){
			system("cls");
			CloseOrNot_E = EnterUI();
		}
	}
	else if( SelectResults == 0){
		CloseOrNot = YES;
	}
	return CloseOrNot;
}

/**************************************************
//函数功能：显示功能菜单并返回选择的菜单编号
//函数原型：EnterUI();
//函数参数：无
//返回值：用户选择的菜单编号
***************************************************/
static int EnterUI(){
	int FunctionNum,CloseOrNot = NO;
	printf("\n--------------------------------FUN MENU--------------------------------\n\n\n");
	printf("\t\t     \t\t0.返回上级菜单\n");
	printf("\t\t     \t\t1.创建新的数据\n");
	printf("\t\t     \t\t2.查看已有数据\n");
	printf("\t\t     \t\t请输入序号以选择操作：");
	fflush(stdin);
	scanf("%d",&FunctionNum);


	switch(FunctionNum){
	case 0:
		CloseOrNot = YES;
		system("cls");
		printf("返回到主菜单。\n");
		Sleep(500);
		system("cls");
		break;
	case 1:
		system("cls");
		InputData();
		
		break;
	case 2:
		system("cls");
		CheckData();
		break;
	}



	return CloseOrNot;

}

