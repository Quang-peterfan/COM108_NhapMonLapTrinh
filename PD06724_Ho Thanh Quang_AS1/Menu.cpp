#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MUC1 50
#define MUC2 100
#define MUC3 200
#define MUC4 300
#define MUC5 400
#include<string.h>
//Bai1 ..............................................................
	int checkSN(float number){                                       
		int check = -1;
		if(number == (int)number){
			check = 1;// day la so nguyen
		}else{
			check = -1;//day la so thuc 		
		}
		return check;
	}
	void checkSoNguyenTo(int number){
		int count = 0 ;
		for(int i = 2; i < number/2; i++){
			if(number % i == 0){
				count++;
			}
		}
		if(number < 2){
			printf("%d ko phai so ng to \n",number);
		}else{
			if(count == 0){
					printf("%d la so ng to \n",number);
			}else{
			printf("%d ko phai so ng to \n",number);
					
			}
		}
		
	}
	void soChinhPhuong(int number){
		int check = -1;
		for(int i = 2; i<= number/2;i++){
			if(i * i == number){
				check = 1;// la so chinh phuong
				break;
			}
		}
		if(check == 1){
			printf("%d la so chinh phuong \n",number);
		}else{
		printf("%d ko phai la so chinh phuong \n",number);	
		}
}
//Bai 1 .....................................................................
void Bai1(){
	printf("Ban da chon chuc nang 1: CT kiem tra so nguyen \n");
	float number;
	printf("Nhap so : ");
	scanf("%f",&number);
	int ckSoNguyen = checkSN(number);
	if(ckSoNguyen > 0 ){
		printf("%f la so nguyen \n",number);
		checkSoNguyenTo(number);
		soChinhPhuong(number);
	}else{
		printf("%f ko phai so Nguyen \n",number);
	
}	
	
}
//bai2 ............................................
void Bai2 (){
	puts("Ban da chon chuc nang 2:Tim UCLN va BCNN cua 2 so");
	int a,b,ucln,bcnn;
	puts("Hay nhap vao so thu nhat: ");
	scanf("%d",&a);
	puts("Hay nhap vao so  thu hai: ");
	scanf("%d",&b);
	int a1=a , b1=b; //2 bien da luu o gia tri dau
	if( a== 0){
		ucln = b;
		bcnn = 0;
		
	}else if(b == 0){
		ucln = a;
		bcnn = 0;
	}else if( a==b){
		ucln = a;
		bcnn = a;
	}else{
		while(a != b ){
			if(a > b){
				a -= b;
			}else{
				b -= a;
			}
		}
		ucln = a;
		bcnn = a1 * b1 / a;
		
	}
	printf("BCNN cua %d va %d la %d \n",a1,b1,bcnn);
	printf("UCLN cua %d va %d la %d \n ",a1,b1,ucln);

		
	}
//Bai 3 .......................................................
	void tienKaRa(int gioDau,int gioCuoi){
		int T = 150000; // so tien moi h
	int  tongGio;
	int tienGio;
	int km4,kmv	 ;// khuyen mai tu gio thu 4
	printf("Tinh tien KARAOKE \n");
	
	tongGio = gioCuoi - gioDau;
	printf("*Gio su dung : %dh \n", tongGio);
	printf("Tien gio: %dd \n",(tongGio*T));
	if(gioDau >= 14 && gioDau <= 17){
			if(tongGio > 3){
		printf("*So tien KM khi vuot qua 3 tieng :	\n");
		km4 = (tongGio - 3) * 0.3 * T;
		tienGio = tongGio * T - km4;
		printf("So gio vuot qua: %d ==> Tien KM: %dd  \n",(tongGio - 3),km4);
		
	}else{
		tienGio = tongGio * T;
	}
	kmv = tienGio * 0.1; //10 %

	printf("*Khuyen mai khung gio vang giam 10/100 : %dd \n",kmv);

	tienGio = tienGio -kmv;

	}
	printf("==>Tien phai tra : %dd \n",tienGio);
}


void Bai3(){
	puts("Ban da chon chuc nang 3: CT tinh tien karaoke \n");
int gioDau , gioCuoi ;
do{
	printf("Nhap gio Dau: \n");
	scanf("%d",&gioDau);
	printf("Nhap gio Cuoi: \n");
	scanf("%d",&gioCuoi);

}while(gioDau <12 || gioCuoi >23); 
tienKaRa(gioDau,gioCuoi);
}
//Bai 4 ...........................................................
void Bai4()	{
	printf("        =========CT Tinh Tien Dien ==========    \n");
	int SoDien , SoTien ;
	printf("So Dien Tieu Thu (kWh): \n");
	scanf("%d",&SoDien);
	if(SoDien <= MUC1){
		SoTien = SoDien * 1678;
		printf("MUC1 => So Dien: %d(kWh)=> So Tien: %dd", SoDien,SoTien);	
	}else if(SoDien <= MUC2){
		SoTien = (MUC1 * 1678) + (SoDien - MUC1)*1734;
		printf("MUC 2 => So Dien: %d(kWh) => So Tien: %dd", SoDien, SoTien);	
	}else if(SoDien <= MUC3){
		SoTien = (MUC1 * 1678) + 50*1734 + (SoDien - MUC2)*2014;
		printf("MUC 3 => So Dien: %d(kWh) => So Tien: %dd", SoDien, SoTien);			
	}else if(SoDien <= MUC4){
		SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + (SoDien - MUC3)*2536;
		printf("MUC 4 => So Dien: %d(kWh) => So Tien: %dd", SoDien, SoTien);
	}else if(SoDien <= MUC5){
		SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + 100*2536 + (SoDien - MUC4)*2834;
		printf("MUC 5 => So Dien: %d(kWh) => So Tien: %dd", SoDien, SoTien);
	}else {
		SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (SoDien - MUC4)*2927;
		printf("MUC 6 => So Dien: %d(kWh) => So Tien: %dd", SoDien, SoTien);
	}
	
}
//Bai5...................................................................................
void Bai5() {
	printf("Ban da chon chuc nang 5: CT doi tien \n");
	int menhgia[] = {500,200,100,50,20,10,5,2,1};
	int sotien; // so tien can doi
	int sototien;
	printf("Nhap vao so tien can doi(k): ");
	scanf("%d",&sotien);
	printf("So to doi dc: \n");
while(sotien){
	for(int i = 0; i < 9; i++){
		sototien = sotien/menhgia[i];
		if(sototien != 0){
			
			printf(" %d to %d \n",sototien,menhgia[i]);
		}
		sotien = sotien - sototien * menhgia[i];
		}
	}
}
	
//Bai6.......................................................................................
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
void Bai6(){
	printf("Ban da chon chuc nang 6: CT Tinh lai suat ngan hang \n");
	int tienVay = 12000000;
    laiSuat(tienVay);
}
//Bai 7.......................................................................................
 void laisuat( int tienVay){
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
	void Bai7(){
	printf("Ban da chon chuc nang 7: CT tra gop mua xe \n");
	int tienXe = 600000;
	int tienVay = 0;
	int tienTraTruoc = 0;
	tienTraTruoc = tienXe * 0.2;
	tienVay = tienXe * 0.8;
	
	if(tienVay > 500000){
		tienVay = 500000;
		tienTraTruoc = tienXe - tienVay;
		laisuat(tienVay);
		printf("So tien vay cua ban vuot han muc quy dinh \n ");
		printf("Tien tra truoc: %dd \n",tienTraTruoc);
    	printf("Tien vay: %dd \n",tienVay);
	}else{
		laisuat(tienVay);
		printf("So tien vay cua ban vuot han muc quy dinh \n ");
		printf("Tien tra truoc: %dd \n",tienTraTruoc);
    	printf("Tien vay: %dd \n",tienVay);
	}
	
	}
	//Bai 8 ...........................................................................
	struct SinhVien{
	// Tu dinh nghia kieu du lieu moi
	char hoTen[50];
	float diemTB;
};
void Bai8(){
	printf("Ban da chon chuc nang 8: CT Sap xep thong tin SV \n");
		//input
	//tao mang , chua dc 5 sv
	struct SinhVien dsSV[5];
	//nhap mang
	int i;
	//nhap mang = for
	for(i=0;i<3;i++){
			fflush(stdin);
		printf("Nhap ho ten sv thu %d: ",i+1);
		gets(dsSV[i].hoTen);	
		printf("Nhap diem TB sv thu %d: ",i+1);
		scanf("%f",&dsSV[i].diemTB);
		getchar();
			
	}
	//sapxep du lieu
	int j;
	for( i=0 ; i<2 ; i++){
		for( j= i+1; j< 3; j++){
			//so sanh vs hoan vi
			if(dsSV[i].diemTB<dsSV[j].diemTB){
				//thi hoan vi 2 thong tin sv
				 float diemTam = dsSV[i].diemTB;
				 dsSV[i].diemTB = dsSV[j].diemTB;
				 dsSV[j].diemTB = diemTam;
				 // hoan vi ten
				 char tenTam[50];
				//strcpy(chuoi1,chuoi2)
				strcpy(tenTam,dsSV[i].hoTen);
				strcpy(dsSV[i].hoTen,dsSV[j].hoTen);
				strcpy(dsSV[j].hoTen,tenTam);
				 
				
			}
		}
	}
	//out put
	printf("Danh sach sinh vien \n");
	//xuat mang = for
	for(i=0;i<3;i++){
		printf("Ho ten : %s \n",dsSV[i].hoTen);
		printf("Diem TB: %.1f \n",dsSV[i].diemTB);
		if( dsSV[i].diemTB >=9 ){
			printf("Hoc luc: Xuat sac \n");
		}else if(dsSV[i].diemTB >= 8){
			printf("Hoc luc: Gioi \n");
		}else if(dsSV[i].diemTB >= 6.5){
			printf("Hoc luc: Kha \n");
		}else if(dsSV[i].diemTB >= 5){
			printf("Hoc luc: TB \n");
		}else{
			printf("Hoc luc: Yeu \n");
		}
	}

}
//bai9...........................................................................................
void Bai9(){
		printf("Ban da chon chuc nang 9: CT game FPOLY LOTT \n");
	int randomNumber;
	srand(time(0));
	int numberA, numberB;
	int count = 0;
	printf("Nhap 2 so may man \n");
	printf("Nhap so thu nhat: ");
	scanf("%d",&numberA);
	printf("nhap so thu  hai: ");
	scanf("%d",&numberB);
	printf("So trung thuong :");
   for(int i = 0; i < 2 ; i++){
   	randomNumber = rand() % 15;
   	printf("%10d",randomNumber);
   	if(numberA == randomNumber || numberB == randomNumber){
   		count++;
	   }
   }
   printf("\n ----------------------------------\n");
   if(count == 0){
   	printf("Chuc ban may man lan sau "); 	
   }else{
   	if(count == 1){
   		printf("Ban da trung giai 2");
	   }else{
	   	printf("Ban da trung giai 1");
	   }
   }
}
//bai 10..........................................................................................
struct PhanSo{
	int tuSo;
	int mauSo;};
void Bai10(){
	printf("Ban da chon chuc nang 10: CT Tinh toan phan so \n");
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

}
//thoat 11
void Bai11(){
	printf("Thoat");
	
	
}

int main(){
	 while (true){	 	
	 	system("cls");
	 	printf("\n");
	 	printf("\n======================================Menu Chuong Trinh ================================\n");
	 	printf("\n Chuc nang  1: CT kiem tra so nguyen                             							\n");
	 	printf("\n Chuc nang  2: CT tim Uoc chung so lon nhat va boi so chung 2 so 							\n");
	 	printf("\n Chuc nang  3: CT Tinh tien karaoke                            							\n");
		printf("\n Chuc nang  4: CT Tinh tien dien 															");
	 	printf("\n Chuc nang  5: CT doi tien 									     					    ");		
	 	printf("\n Chuc nang  6: CT tinh lai suat ngan hang vay tra gop         							\n");	
		printf("\n Chuc nang  7: CT vay tien ngan hang mua xe					     						");	
		printf("\n Chuc nang  8: CT Sap xep thong tin SV				     	   						    ");
		printf("\n Chuc nang  9: CT xay dung game FPOLY-Loot					   							");	
		printf("\n Chuc nang 10: CT CT Tinh toan phan so						    							");
		printf("\n Chuc nang 11: Thoat         																");
		printf("\n========================================================================================\n");		
	 	int chon;
	 	printf("\n Moi ban chon chuc nang: ");
	 	scanf("%d",&chon);
	 	switch(chon){
	 		case 1 :
	 			printf("CT kiem tra so nguyen \n");
	 			Bai1();
	 			system("pause");
	 			break;
	 		case 2 :
	 			Bai2();
	 			system("pause");
	 			break;
	 		case 3 :
	 			Bai3();
	 			system("pause");
	 			break;
	 		case 4 :
	 			Bai4();
	 			system("pause");
	 			break;
	 		case 5 :
	 			Bai5();
	 			system("pause");
	 			break;
	 		case 6 :
	 			Bai6();
	 			system("pause");
	 			break;
	 		case 7 :
	 			Bai7();
	 			system("pause");
	 			break;
	 		case 8 :
	 			Bai8();
	 			system("pause");
	 			break;
	 		case 9 :
	 			Bai9();
	 			system("pause");
	 			break;
	 		case 10 :
	 			Bai10();
	 			system("pause");
	 			break;
	 		case 11 :
	 			Bai11();
	 			return 0;
	 		
		 }
	 }
	 return 0;
	 
}


