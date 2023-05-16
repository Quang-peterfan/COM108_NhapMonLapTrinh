//viet chuong trinh may tinh calculator
//1. khai bao thu vien
#include<stdio.h>
//2. khai bao ham main
int main(){
	//in ra man hinh
    printf("Chuong trinh may tinh Calculator \n");
    int numberA = 0;
    int numberB = 0;
    int add = numberA + numberB;
    // %d decimal he 10 0->9 so nguyen
    printf("%d + %d = %d \n",numberA,numberB,add);
    printf("Tong: %d \n",add);
    int result = numberA - numberB;//Phep tru
    printf("%d - %d = %d \n",numberA,numberB,result);
    printf("Hieu: %d \n",result);
    int sp = numberA * numberB;//Phep Nhan
    printf("%d * %d = %d \n",numberA,numberB,sp);
    printf("Tich: %d \n",sp);
	int vp = numberA / numberB;//Phep Chia
    printf("%d / %d = %d \n",numberA,numberB,vp);
    printf("Thuong: %d \n",vp);
    
	
}
