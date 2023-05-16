#include<stdio.h> // Giai pt bac 1
int main(){
	printf("CT Giai PT Bac 1 \n");
	float a, b, x;
	printf("Nhap a: \n");
	scanf("%d",&a);
    printf("Nhap b: \n");
	scanf("%d",&b);
	if(a == 0){
		//b = 0
		//b != 0
		if(b == 0){
			printf("Phuong trinh vo so nghiem");
		}else{
			//b != 0
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x = -b/a;
		printf("Nghiem x = %f",x);
	}
}
