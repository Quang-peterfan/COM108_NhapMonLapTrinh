#include<stdio.h>
int main (){
	printf("CT Tinh TBC cac so chia ht cho 2 \n");
	int min,max,avg;
    int i = min ;
   int  count = 0;
   int sum = 0;
    printf("Nhap min and Max : \n");
    scanf("%d%d",&min,&max);	
    while ( i <= max ){
    	
    	if (i % 2 == 0){
    		printf("%3d \n", i);
    		sum += i; // sum = sum + i;
    		count++;
		}
    	i ++;
	}
	avg = sum / count ;
	printf("\n TBC cac so chia ht cho 2: %3d",avg);
	return 0;
}
	