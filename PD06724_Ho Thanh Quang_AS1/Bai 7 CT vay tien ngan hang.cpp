//24 nam = 24 * 12thang = 288 thang
//7.2% <=> 7.2% *10 /12 = 6 %/thang
// 500.000 ==> 500k
#include<stdio.h>
void laiSuat( int tienVay){
	int nam = 1;
	int tienLai ;// tien lai hang thang
	int tienGoc = tienVay/288 ;// tien goc phai tra tong 24 thang
	int tienTra;//tien phai tra hang thang = tien goc + tien lai
	int tienCon;// tien con lai sau khi tra goc
	tienCon = tienVay;
	printf("Ky Han | Lai phai tra | Goc phai tra |  So tien phai tra  | So tien con lai|\n");
	for(int i = 1; i <= 288; i++){
		tienLai = tienCon * 0.06;
		tienTra = tienGoc + tienLai;
		tienCon = tienCon - tienGoc; 
		printf("---------------------------------------------------------------------------- \n");
		printf("   %3d |",i);
		printf("%10d    | ",tienLai);
		printf("%10d   |", tienGoc);
		printf("    %10d      |", tienTra);
		printf("    %10d  |", tienCon);
		printf("\n");
		if(i % 12 == 0){			
			nam++;
			printf("\n");
			printf("//----------------------------------------Ket Thuc %d nam -------------------------------------\n",nam);
			printf("\n");
		}
	}
}
	
int main (){
	printf("CT tra gop mua xe \n");
	int tienXe = 600000;
	int tienVay = 0;
	int tienTraTruoc = 0;
	tienTraTruoc = tienXe * 0.2;
	tienVay = tienXe * 0.8;
	
	if(tienVay > 500000){
		tienVay = 500000;
		tienTraTruoc = tienXe - tienVay;
		laiSuat(tienVay);
		printf("So tien vay cua ban vuot han muc quy dinh \n ");
		printf("Tien tra truoc: %dd \n",tienTraTruoc);
    	printf("Tien vay: %dd \n",tienVay);
	}else{
		laiSuat(tienVay);
		printf("So tien vay cua ban vuot han muc quy dinh \n ");
		printf("Tien tra truoc: %dd \n",tienTraTruoc);
    	printf("Tien vay: %dd \n",tienVay);
	}
	
	
}