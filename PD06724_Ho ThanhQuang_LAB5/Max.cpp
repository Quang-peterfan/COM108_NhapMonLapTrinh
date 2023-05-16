#include<stdio.h>
int max(int a , int b , int c){
	int max = a;
	if(b > max ){
		max = b ;
		
	}
	if(c > max){
		max = c;
	}
	return max ;
	
}
int main(){
	printf("CT tim Max 3 so \n");
	int a,b,c;
	int SLN;
	printf("Nhap so a: \n");
	scanf("%d",&a);
	printf("Nhap so b: \n");
	scanf("%d",&b);
	printf("Nhap so c: \n");
	scanf("%d",&c);
	
	
	SLN = max(a,b,c);
	printf("So lon nhat : %d",SLN);

}