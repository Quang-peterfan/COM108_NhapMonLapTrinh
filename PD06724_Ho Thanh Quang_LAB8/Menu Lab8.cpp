#include<stdio.h>
#include<string.h>
struct sinhvien{
	char mssv[50];
	char tensv[50];
	char nganhhoc[50];
	float diemtb;
}; 
void input(sinhvien &sv){
			fflush(stdin);
	printf("Nhap MSSV: ");gets(sv.mssv);
	printf("Nhap ten SV: ");gets(sv.tensv);
	printf("Nhap nganh hoc: ");gets(sv.nganhhoc);
	printf("Nhap Diem TB: ");scanf("%f",&sv.diemtb);
	
}
void output(sinhvien sv){
    printf("***-------------------------------------*** \n");
	printf("MSSV: %s \n",sv.mssv);
	printf("Ten SV: %s \n",sv.tensv);	
	printf("Nganh hoc: %s \n",sv.nganhhoc);
	printf("Diem TB: %f \n",sv.diemtb);
//	printf("***-------------------------------------***\n");
}
void sapxep(sinhvien sv[], int n){
	sinhvien tmp;
	for(int i = 0;i < n; i++){
		for(int j = i + 1 ; j < n; j++){
			if(sv[i].diemtb > sv[j].diemtb){
				tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp;
			}
		}
	}
}
void tim(sinhvien sv[], int n, char timmssv[]){
	printf("----------------------------------------------\n");
	for(int i = 0; i < n; i++){
		if(strcmp(sv[i].mssv,timmssv)==0){
			
			printf(" Da tim thay \n");
			output(sv[i]);
			return;
		}
	}
	printf(" Khong tim thay \n");
}
int main(){
	printf("CT Luu Thong Tin Sinh Vien \n");
	sinhvien ds[100];
	int count = 0;
	int check = 1;
	int choice = 0;
while(true){
	    printf("***--------------------------------------------------------***\n");
		printf(" |1.Nhap vao danh sach sv                                     |\n");
		printf(" |2.In ra danh sach sv                                        |\n");
		printf(" |3.Sap xep danh sach sv theo diem                            | \n");
		printf(" |4.Tim kiem sv = MSSV                                        |\n");
	    printf("***--------------------------------------------------------***\n");
	    printf("Ban chon :   "); scanf("\n%d",&choice);
	   
		switch(choice){
		case 1: 
			do{
			sinhvien sv;
			input(ds[count]);
			count++;
			printf("Ban muon tiep tuc? (bam 1 de tiep tuc): ");
			scanf("%d",&check);
			}while(check == 1);
			break;
		case 2: 	printf("------------------------------------\n");
	   			for(int i = 0; i < count ; i++){
				output(ds[i]);
			}
		      break;
		case 3: printf("Sinh vien sau khi sap xep \n");
				sapxep(ds,count);
		      break;
		case 4: fflush(stdin);
				printf("Tim kiem sinh vien \n");
				printf("Nhap MSSV can tim: ");
				char find[50];gets(find);
				tim(ds,count,find);
				break;      
	}
		}
			}