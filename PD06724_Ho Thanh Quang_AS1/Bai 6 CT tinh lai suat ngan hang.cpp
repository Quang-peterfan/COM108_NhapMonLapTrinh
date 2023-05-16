#include<stdio.h>
void laiSuat( int tienVay){
	int tienLai ;// tien lai hang thang
	int tienGoc = tienVay/12 ;// tien goc phai tra hang thang
	int tienTra;//tien phai tra hang thang = tien goc + tien lai
	int tienCon;// tien con lai sau khi tra goc
	tienCon = tienVay;
	printf("Ky Han | Lai phai tra | Goc phai tra |  So tien phai tra  | So tien con lai|\n");
	for(int i = 1; i <= 12; i++){
		tienLai = tienCon * 0.05;
		tienTra = tienGoc + tienLai;
		tienCon = tienCon - tienGoc; 
		printf("---------------------------------------------------------------------------- \n");
		printf("   %3d |",i);
		printf("%10d    | ",tienLai);
		printf("%10d   |", tienGoc);
		printf("    %10d      |", tienTra);
		printf("    %10d  |", tienCon);
		printf("\n");
	}
	
}
int main (){
	printf("CT Tinh lai suat \n");
	int tienVay = 12000000;
    laiSuat(tienVay);
}