#include<stdio.h>
#include<math.h>
int main(){
	printf("Chuong trinh Giai PT Bac 2 \n");
	float a,b,c,x1,x2,denta;
	printf("Nhap so a: \n");
	scanf("%f",&a);
	printf("Nhap so b: \n");
	scanf("%f",&b);
	printf("Nhap so c: \n");
	scanf("%f",&c);
	denta = b*b - 4*a*c;
	if(a != 0){
		printf("denta = %f",denta);
	if(denta > 0){
		printf("Phuong trinh co 2 Ng Phan Biet");
		x1 = -b + sqrt(denta)/(2*a);
		x2 = -b - sqrt(denta)/(2*a);
		printf("x1 = %f \n",x1);
		printf("x2 = %f \n",x2);
	}else{
		if(denta == 0){
			printf("Phuong tnh co Ng Kep");
		}else{
			//denta < 0
			printf("Phuong tinh vo Ng \n");
		}
	}
	}else{
		//giai PTbac 1
		if(b == 0){
		//c = 0
		//c != 0
		if(c == 0){
			printf("Phuong trinh vo so nghiem");
		}else{
			//c != 0
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x1 = -c/b;
		printf("Nghiem x = %f",x1);
	}
	}
	
	
}