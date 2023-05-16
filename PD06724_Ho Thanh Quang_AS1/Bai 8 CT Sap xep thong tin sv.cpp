#include<stdio.h>
#include<string.h>
struct SinhVien{
	// Tu dinh nghia kieu du lieu moi
	char hoTen[50];
	float diemTB;
};
int main(){
	//input
	//tao mang , chua dc 5 sv
	struct SinhVien dsSV[3];
	//nhap mang
	int i;
	//nhap mang = for
	for(i=0;i<3;i++){
		printf("Nhap ho ten sv thu %d: ",i+1);
		gets(dsSV[i].hoTen);
		printf("Nhap diem TB sv thu %d: ",i+1);
		scanf("%f",&dsSV[i].diemTB);
		getchar();
			
	}
	//sapxep du lieu
	int j;
	for( i=0 ; i<2 ; i++){
		for( j= j+1; j< 3; j++){
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
	for(i=0;i<;i++){
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
	return 0;
}