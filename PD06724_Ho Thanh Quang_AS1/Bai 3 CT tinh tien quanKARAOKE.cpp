#include<stdio.h>
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
int main (){
int gioDau , gioCuoi ;
do{
	printf("Nhap gio Dau: \n");
	scanf("%d",&gioDau);
	printf("Nhap gio Cuoi: \n");
	scanf("%d",&gioCuoi);

}while(gioDau <12 || gioCuoi >23); 
tienKaRa(gioDau,gioCuoi);
	}
	