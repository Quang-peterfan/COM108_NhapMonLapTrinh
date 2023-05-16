#include<stdio.h>
#include<string.h>
char s[5][20];// 5 ptu moi phan tu 20 ki tu
char t[100];
void nhap(){
	printf("Nhap xau ki tu: \n");
	for(int i = 0; i < 5; i++){
		printf("Xau[%d]: ",i); scanf("%s",s[i]);
	
	}
		printf("Chuoi da nhap :");
}
void xuat(){
	for(int i = 0; i < 5; i++){
		printf("\n %s",s[i]);
	}
}
void sapxep(){
	printf("\n Chuoi sau khi sap xep: \n");
	for(int i = 0; i < 5; i++){
		for(int j = 1 ; j < 5; j++ ){
			if(strcmp(s[j-1],s[j]) > 0){
				 strcpy(t, s[j - 1]); 
				 strcpy(s[j -1], s[j]);
				 strcpy(s[j],t);
			}
		}
	}
	xuat();
}
int main(){
	printf("CT Sap xep chuoi AB \n");
	nhap();
	xuat();
	sapxep();
	
}