
//ѧ����ѧ�ţ��������������ѧ������Ӣ����������ķ�������������
//��߷֣���ͷ֣�ƽ���֣�����������������������ƽ���ɼ�����
//����������Ŀ ��߷� ��ͷ� ƽ���� �������� ���������� ��߷�ѧ��ѧ��
/*
�����дҪ�����£�
��1���������������Ҫ�󣬰���ģ�黯������Ƶķ��������ָ�����ģ�飻
��2���������������漰�ĸ������ݣ���ѡ���ʵ���������������ʾ��
��3����������ģ��֮��Ľӿڣ���ɺ���ԭ�͵���ƣ�˵��������ɵĹ��ܡ���������ͷ���ֵ��
���磺
/**************************************************
//�������ܣ���ʾ�˵�������ѡ��Ĳ˵����
//����ԭ�ͣ�int Menu(void);
//������������
//����ֵ���û�ѡ��Ĳ˵����
***************************************************/
/*
��4��ÿ��ģ����һ�������� c �ļ�ʵ�֣��Զ��ļ���ʽʵ��������ƣ�ÿ���ļ��������Ĳο���
�����±� 7-5 ��ʾ��
��5���ò˵�����ʽ��֯������ģ�顣
*/


#include ".\interface.h"

#define YES 1
#define NO 0
#define NOT 0

int OrderNum = 0;
extern struct Student aver = {"ƽ����", 0, 0, 0, 0, 0, 0};
extern struct Student good = {"����", 0, 0, 0, 0, 0, 0};
extern struct Student fail = {"������", 0, 0, 0, 0, 0, 0};

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
	printf("��лʹ�ñ�����\n");
	


	return 0;
}



/**************************************************
//�������ܣ���ʾ����or�˳��˵�������ѡ��Ĳ˵����
//����ԭ�ͣ�int MainMenu();
//������������
//����ֵ���û�ѡ��Ĳ˵����
***************************************************/
static int MainMenu(){							
	int SelectResults,CloseOrNot = NO;//NO�򲻹�

	printf("\n---------------------------------MAIN MENU---------------------------------\n\n\n");
	printf("\t\t\t\t0.�˳�ϵͳ\n");
	printf("\t\t\t\t1.��¼ϵͳ\n");
	printf("\t\t\t\t�����������ѡ�������");
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
//�������ܣ���ʾ���ܲ˵�������ѡ��Ĳ˵����
//����ԭ�ͣ�EnterUI();
//������������
//����ֵ���û�ѡ��Ĳ˵����
***************************************************/
static int EnterUI(){
	int FunctionNum,CloseOrNot = NO;
	printf("\n--------------------------------FUN MENU--------------------------------\n\n\n");
	printf("\t\t     \t\t0.�����ϼ��˵�\n");
	printf("\t\t     \t\t1.�����µ�����\n");
	printf("\t\t     \t\t2.�鿴��������\n");
	printf("\t\t     \t\t�����������ѡ�������");
	fflush(stdin);
	scanf("%d",&FunctionNum);


	switch(FunctionNum){
	case 0:
		CloseOrNot = YES;
		system("cls");
		printf("���ص����˵���\n");
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

