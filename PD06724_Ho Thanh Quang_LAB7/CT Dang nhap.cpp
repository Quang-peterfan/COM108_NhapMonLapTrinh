#include<stdio.h>
#include<string.h>
char username[100];
int password;
void nhap(){
	printf("Nhap ten dang nhap: ");gets(username);
	printf("Nhap mat khau: \n"); scanf("%d",&password);
}
void login(){
	if(strcmp(username,"quang")== 0  && password == 123456){
		printf("Dang nhap thanh cong \n");
	}else{
		printf("Dang nhap ko thanh cong \n");
	}
}
int main (){
	printf("CT tinh Dang nhap \n");
	nhap();
	login();
}