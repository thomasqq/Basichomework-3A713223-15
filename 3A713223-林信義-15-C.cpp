#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int hr,min;
	
	printf("�п�J�{�b�ɶ�:");
	scanf("%d,%d",&hr,&min);
	
	if(hr<17 && hr>7 &&  min<=59 && min>=0){
		printf("�O�������{�b�O�W�Үɶ��C\n");	
	}
	else if(hr==7 && min<=59 && min>=30){
		printf("�O�������{�b�O�W�Үɶ��C\n");		
	}
	else if(hr >= 25 || min >= 60 || min<=-1){
		printf("�z��J���O�L�Įɶ��C\n");	
	}
	else{
		printf("�O�������{�b�O��Ǯɶ��C\n");	
	}

	system("PAUSE");
	return 0;
}
