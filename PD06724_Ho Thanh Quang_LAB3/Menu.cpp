#include<stdio.h>
#include<math.h>
#define MUC1 50
#define MUC2 100
#define MUC3 200
#define MUC4 300
#define MUC5 400
int main(){
	int chon = 1;
	float n;
	float a,b,c,x1,x2,denta;
	while(true){
		system("cls");
			printf("CT Menu Lab3 \n");
		printf("***----------------------------***  \n");
		printf("\n1.CT Xep loai Hoc Luc SV\n");
		printf("\n2.CT Giai PT Bac 1 \n");
		printf("\n3.CT Giai PT Bac 2 \n");
		printf("\n4.CT Tinh Tien Dien \n");
		printf("\n0.Ket thuc \n");
		printf("***-----------------------------***  \n");
		printf("\n");
		printf("Lua Chon Cua Ban: ");
		scanf("%d",&chon);
	switch(chon){
		case 1:  // Bai 1
				printf("CHUONG TRINH XEP LOAI HOC LUC \n"); 
				printf("Nhap diem: \n");
				scanf("%f",&n);
				if(n>=9){
					printf("==>hoc luc Xuat Sac \n");
					system("pause");//dừng mà hình
				}else{
					if(n>=8){
						printf("==>Hoc luc Gioi \n");
						system("pause");
					}else{
						if(n>=6.5){
							printf("==>Hoc luc Kha \n");
							system("pause");
						}else{
							if(n>=5){
								printf("==>Hoc luc TB \n");	
								system("pause");
							}else{
								if(n>=3){
									printf("==>hoc luc Yeu \n");
									system("pause");
								}else{
									printf("==>Hoc luc Kem \n");
									system("pause");
								}
							}
						}
					}
				} 
			break;
		case 2: // bai 2
		        printf("CT Giai PT Bac 1 \n");
				float a, b, x;
				printf("Nhap a: \n");
				scanf("%d",&a);
			    printf("Nhap b: \n");
				scanf("%d",&b);
				if(a == 0){
					//b = 0
					//b != 0
					if(b == 0){
						printf("Phuong trinh vo so nghiem");
						system("pause");
					}else{
						//b != 0
						printf("Phuong trinh vo nghiem");
						system("pause");
					}
				}else{
					x = -b/a;
					printf("Nghiem x = %f \n",x);
					system("pause");
				} 
					break; //kt CT 2
		case 3:// Bai 3
			    printf("Chuong trinh Giai PT Bac 2 \n");
				printf("Nhap so a: \n");
				scanf("%f",&a);
				printf("Nhap so b: \n");
				scanf("%f",&b);
				printf("Nhap so c: \n");
				scanf("%f",&c);
				denta = b*b - 4*a*c;
				if(a != 0){
					printf("denta = %f\n",denta);
				if(denta > 0){
					printf("Phuong trinh co 2 Nghiem Phan Biet \n");
					x1 = -b + sqrt(denta)/(2*a);
					x2 = -b - sqrt(denta)/(2*a);
					printf("x1 = %f \n",x1);
					printf("x2 = %f \n",x2);
				}else{
					if(denta == 0){
						printf("Phuong tnh co Nghiem Kep \n");
						system("pause");
					}else{
						//denta < 0
						printf("Phuong tinh vo Nghiem \n");	
						system("pause");
					}
				}
				}else{
					//giai PTbac 1
					if(b == 0){
					//c = 0
					//c != 0
					if(c == 0){
						printf("Phuong trinh vo so nghiem \n");
						system("pause");
					}else{
						//c != 0
						printf("Phuong trinh vo nghiem \n");
						system("pause");
					}
				}else{
					x1 = -c/b;
					printf("\nNghiem x = %f",x1);
					system("pause");
				}
				}
				break;
		case 4:
				printf("        =========CT Tinh Tien Dien ==========    \n");
				int SoDien , SoTien ;
				printf("So Dien Tieu Thu (kWh): \n");
				scanf("%d",&SoDien);
				if(SoDien <= MUC1){
					SoTien = SoDien * 1678;
					printf("MUC1 => So Dien: %d(kWh)=> So Tien: %dd \n", SoDien,SoTien);
					system("pause");	
				}else if(SoDien <= MUC2){
					SoTien = (MUC1 * 1678) + (SoDien - MUC1)*1734;
					printf("MUC 2 => So Dien: %d(kWh) => So Tien: %dd \n", SoDien, SoTien);	
					system("pause");
				}else if(SoDien <= MUC3){
					SoTien = (MUC1 * 1678) + 50*1734 + (SoDien - MUC2)*2014;
					printf("MUC 3 => So Dien: %d(kWh) => So Tien: %dd \n", SoDien, SoTien);	
					system("pause");		
				}else if(SoDien <= MUC4){
					SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + (SoDien - MUC3)*2536;
					printf("MUC 4 => So Dien: %d(kWh) => So Tien: %dd \n", SoDien, SoTien);
					system("pause");
				}else if(SoDien <= MUC5){
					SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + 100*2536 + (SoDien - MUC4)*2834;
					printf("MUC 5 => So Dien: %d(kWh) => So Tien: %dd \n", SoDien, SoTien);
				}else {
					SoTien = (MUC1 * 1678) + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (SoDien - MUC4)*2927;
					printf("MUC 6 => So Dien: %d(kWh) => So Tien: %dd \n", SoDien, SoTien);
					system("pause");
				}				
		        break;
		case 0:printf("Ket thuc \n");
		 return 0;
	}	
	}
	
		
}