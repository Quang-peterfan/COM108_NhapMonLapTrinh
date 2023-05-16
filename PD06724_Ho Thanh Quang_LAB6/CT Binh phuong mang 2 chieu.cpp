#include<stdio.h>
int a[100][100];
int n = 0, m = 0;
void nhap (){
	printf("Nhap mang 2 chieu: \n");
	printf("Nhap m =");scanf("%d",&m);
	printf("Nhap n =");scanf("%d",&n);
		for(int i = 0; i < m; i++){
			for(int j = 0 ; j < n; j++){
				printf("a[%d][%d] =",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	
}
void xuat(){
	printf("Xuat mang 2 chieu ra man hinh: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("a[%d][%d] = %d \t",i,j,a[i][j]);
		}
		printf("\n");
}
}
void binhPhuong(){
	printf("***.Binh Phuong mang 2 chieu.*** \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
		a[i][j]	= a[i][j] * a[i][j] ;
		}
	}
	xuat();
}
int main (){
printf("*-----------CT Binh phuong mang 2 chieu ------------*\n");
nhap();
xuat();
binhPhuong();
}