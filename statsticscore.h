
static void sortComputer(){
	int i, j;
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
}

static void sortMath(){
	int i, j;
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
}

static void sortEnglish(){
	int i, j;
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
}

static void sortChinese(){
	int i, j;
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
}

static void sortPE(){
	int i, j;
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
}