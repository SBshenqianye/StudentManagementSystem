
static int sortComputer(){
	int i, j, choice;
	struct Student temp;
	for(i=0;i<OrderNum-1;i++){
		for(j=i;j<OrderNum;j++){
			if( stu[j].computer > stu[i].computer){
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	while(1){
		if(choice == 1 || choice == 2){
			break;
		}
		choice = UporDown();
	}
	return choice;
}

static int sortMath(){
	int i, j, choice;
	struct Student temp;
	for(i=0;i<OrderNum-1;i++){
		for(j=i;j<OrderNum;j++){
			if( stu[j].math > stu[i].math){
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	while(1){
		if(choice == 1 || choice == 2){
			break;
		}
		choice = UporDown();
	}
	return choice;
}

static int sortEnglish(){
	int i, j, choice;
	struct Student temp;
	for(i=0;i<OrderNum-1;i++){
		for(j=i;j<OrderNum;j++){
			if( stu[j].english > stu[i].english){
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	while(1){
		if(choice == 1 || choice == 2){
			break;
		}
		choice = UporDown();
	}
	return choice;
}

static int sortChinese(){
	int i, j, choice;
	struct Student temp;
	for(i=0;i<OrderNum-1;i++){
		for(j=i;j<OrderNum;j++){
			if( stu[j].chinese > stu[i].chinese){
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	while(1){
		if(choice == 1 || choice == 2){
			break;
		}
		choice = UporDown();
	}
	return choice;
}

static int sortPE(){
	int i, j, choice;
	struct Student temp;
	for(i=0;i<OrderNum-1;i++){
		for(j=i;j<OrderNum;j++){
			if( stu[j].PE > stu[i].PE){
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	while(1){
		if(choice == 1 || choice == 2){
			break;
		}
		choice = UporDown();
	}
	return choice;
}