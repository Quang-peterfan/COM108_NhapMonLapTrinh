#include<stdio.h>
int main (){
	printf("CT KT so chinh phuong \n");
	int num;
	printf("Nhap so : \n");
	scanf("%d",&num);
	int count = 0;
	int a = 0;
	while( a < num/2){
		if(a*a == num){
			printf("==> %3d la so chinh phuong ",num);
		count ++;
		break;
	}
	a++;
	}
	if( count == 0){
		printf(" ==> %3d khong phai la so chinh phuong ",num);}
		
}