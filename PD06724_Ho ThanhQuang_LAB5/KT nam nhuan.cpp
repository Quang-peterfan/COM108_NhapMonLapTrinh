#include<stdio.h>
int checkNamNhuan(int year){
	int check = 0;
	if(year % 4 == 0 && year != 100){
		check = 1;
	}
	return check;
}

int main (){
	printf("CT Kiem tra nam nhuan \n");
	int y;
	printf("Nhap nam : ");
	scanf("%d",&y);
	int ck = checkNamNhuan(y);
	if(ck == 1){
		printf(" %d la nam nhuan \n",y);
		
	}else{
		printf(" %d khong phai la nam nhuan ",y);
	}
	
	
	}                            
		            
               