#include<stdio.h>
int main (){
	printf("CHUONG TRINH XEP LOAI HOC LUC \n");
	float n;
	printf("Nhap diem: \n");
	scanf("%f",&n);
	if(n>=9){
		printf("hoc luc Xuat Sac");
	}else{
		if(n>=8){
			printf("Hoc luc Gioi");
		}else{
			if(n>=6.5){
				printf("Hoc luc Kha");
			}else{
				if(n>=5){
					printf("Hoc luc TB");
				}else{
					if(n>=3){
						printf("hoc luc Yeu");
					}else{
						printf("Hoc luc Kem");
					}
				}
			}
		}
	}
}
	