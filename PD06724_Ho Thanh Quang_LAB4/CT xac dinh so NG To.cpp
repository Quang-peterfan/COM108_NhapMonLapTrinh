#include<stdio.h>
int main (){
	printf("CT xac dinh so NG To \n");
	int n;
	printf(" Nhap so nguyen : \n");
	scanf("%d",&n);
	printf("So nguyen: %d",n);
	char check = 0;
	for (int i = 2 ;i < n; i++)
	{
		if(	n % i == 0){
			check = 1;
		}
		if(check == 0 ){
			printf("\n %3d la so Ng To ", n);break;
		}else{
			printf(" \n %3d khong phai la so NG To",n);break;
		}
	}
	return 0;
}