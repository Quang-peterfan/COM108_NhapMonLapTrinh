#include<stdio.h>
int a[100];
int n = 0;
void nhap(){
	printf("Nhap n = "); scanf(" %d",&n);
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
void max(){
	printf("\nTim phan tu lon nhat trong mang: \n");
	int max = a[0];
	for(int i = 0; i < n ; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("Phan tu lon nhat : %d", max);
}
void min(){
	printf("\nTim phan tu nho nhat trong mang: \n");
	int min = a[0];
	for(int i = 0; i < n ; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Phan tu nho nhat : %d", min);
}
int main (){
	printf("CT min max mang 1 chieu \n");
	nhap();
	xuat();
	max();
	min();
}