#include<stdio.h>
int a[100];
int n = 0;
void nhap (){
	printf("Nhap n :");
	scanf("%d",&n);
	for(int i = 0; i < n ; i++){
		printf("a[%d] = ",i); scanf("%d",&a[i]);
	}
}
void xuat(){
	printf("Xuat ra man hinh: \n");
	for(int i = 0; i < n; i++){
		printf("a[%d] = %d \t", i , a[i]);
	}
}
void xep(){
	printf("\nMang sau khi sap xep giam dan: \n");
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	xuat();
}

int main(){
	printf("Sap xep mang giam dan \n");
	nhap();
	xuat();
	xep();
}