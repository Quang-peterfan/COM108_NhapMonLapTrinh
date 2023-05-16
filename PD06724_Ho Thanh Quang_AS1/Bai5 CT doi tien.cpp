#include<stdio.h>
int main(){
	printf("CT doi tien \n");
	int menhgia[] = {500,200,100,50,20,10,5,2,1};
	int sotien; // so tien can doi
	int sototien;
	printf("Nhap vao so tien can doi(k): ");
	scanf("%d",&sotien);
	printf("So to doi dc: \n");
while(sotien){
	for(int i = 0; i < 9; i++){
		sototien = sotien/menhgia[i];
		if(sototien != 0){
			
			printf(" %d to %d \n",sototien,menhgia[i]);
		}
		sotien = sotien - sototien * menhgia[i];
		}
	}
	
}