#include<stdio.h>
int a[100];
int n = 0;
void nhap(){
	printf("Nhap so: ");
	scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		printf("a[%d ] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(){
	printf(" Cac so da nhap \n");
	for(int i = 0 ; i < n; i++){
		printf("a[%d] = %d \t",i,a[i]);
}
}
void TBC3(){
	printf("\n Xuat ra man hinh : \n");
	int sum = 0;
	int count = 0;
	float tbc = 0;
	for(int i = 0 ; i < n; i++){
		if(a[i] % 3 == 0){
			printf("a[%d] = %d \t",i,a[i]);
			sum += a[i];
			count++;
		}
	}
	tbc = sum/count;
	printf("\n Tong: %d",sum);
	printf("\n co %d so chia ht cho 3",count);
	printf("\n TBC: %.2f",tbc);
}
int main(){
	printf("CT tinh TBC cac so chia ht cho 3 \n");
	nhap();
	xuat();
	TBC3();
	
}