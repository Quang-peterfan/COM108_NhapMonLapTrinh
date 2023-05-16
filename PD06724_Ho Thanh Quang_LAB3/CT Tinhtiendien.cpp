#include<stdio.h>
#define MUC1 50
#define MUC2 100
#define MUC3 200
#define MUC4 300
#define MUC5 400

int main(){
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