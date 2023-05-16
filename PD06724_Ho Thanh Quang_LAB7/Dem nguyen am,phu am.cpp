#include<stdio.h>
char chuoi[100];
void nhap(){
	printf("Nhap vao 1 chuoi: ");
	gets(chuoi);
}
void xuat(){
	printf("Chuoi ban da nhap la: ");
	puts(chuoi);
}
void demnguyenphuam(){
	int i = 0;
	int n = 0;//nguyen am
	int p = 0;//phu am
	while(chuoi[i] != '\0'){
		if (chuoi[i] == 'u' || chuoi[i] == 'e'|| chuoi[i] == 'o'|| chuoi[i] == 'a'||chuoi[i] == 'i'){
			n++;
		}else{
			p++;
		}
		i++;
	}
	printf("==>Co %d nguyen am   \n",n);
	printf("==>Co %d phu am  \n",p);
	
}
int main(){
	printf("CT tinh so nguyen am va phu am co trong chuoi \n");
	nhap();
	xuat();
	demnguyenphuam();
	
}