#include<stdio.h>
struct PhanSo{
	int tuSo;
	int mauSo;
	
};
int main(){
	//chuc nang 10
	struct PhanSo so1,so2;
	printf("Xin moi nhap vao so thu 1: ");
	scanf("%d%d",&so1.tuSo,&so1.mauSo);
		printf("Xin moi nhap vao so thu 2: ");
		scanf("%d%d",&so2.tuSo,&so2.mauSo);
		struct PhanSo tong,hieu,tich,thuong;
		//process
		tich.tuSo = so1.tuSo * so2.tuSo;
		tich.mauSo = so1.mauSo*so2.mauSo;
		thuong.tuSo = so1.tuSo * so2.tuSo;
		thuong.mauSo = so1.mauSo*so2.mauSo;
		tong.tuSo = so1.tuSo*so2.tuSo + so2.tuSo*so1.mauSo;
		tong.mauSo = so1.mauSo * so2.mauSo;
		hieu.tuSo = so1.tuSo*so2.tuSo - so2.tuSo*so1.mauSo;
		hieu.mauSo = so1.mauSo * so2.mauSo;
		
//output		
printf("Tong 2 phan so: %d/%d\n",tong.tuSo,tong.mauSo);
printf("Hieu 2 phan so: %d/%d\n",hieu.tuSo,hieu.mauSo);
printf("Tich 2 phan so: %d/%d\n",tich.tuSo,tich.mauSo);
printf("Thuong 2 phan so: %d/%d\n",thuong.tuSo,thuong.mauSo);
return 0;
}