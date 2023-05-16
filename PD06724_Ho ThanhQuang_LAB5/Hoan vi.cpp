#include<stdio.h>
void swap(int * a, int * b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
int main (){
	printf("CT Hoan Vi \n");
	int a,b;
	printf("Nhap 2 so: \n " );
	scanf("%d ----  %d ",&a,&b);
	swap(&a,&b);
	printf(" Sau hoan vi: %d - %d ",a,b);
	
}