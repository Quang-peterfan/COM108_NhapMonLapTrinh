#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	printf("CT game FPOLY LOTT \n");
	int randomNumber;
	srand(time(0));
	int numberA, numberB;
	int count = 0;
	printf("Nhap 2 so may man \n");
	printf("Nhap so thu nhat: ");
	scanf("%d",&numberA);
	printf("nhap so thu  hai: ");
	scanf("%d",&numberB);
	printf("So trung thuong :");
   for(int i = 0; i < 2 ; i++){
   	randomNumber = rand() % 15;
   	printf("%10d",randomNumber);
   	if(numberA == randomNumber || numberB == randomNumber){
   		count++;
	   }
   }
   printf("\n ----------------------------------\n");
   if(count == 0){
   	printf("Chuc ban may man lan sau "); 	
   }else{
   	if(count == 1){
   		printf("Ban da trung giai 2");
	   }else{
	   	printf("Ban da trung giai 1");
	   }
   }
}