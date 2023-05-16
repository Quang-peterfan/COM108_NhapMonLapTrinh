#include<stdio.h>
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
				printf("%d la phai so ng to \n",number);
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
int main (){
		printf("Chuong trinh KT so Ng to \n");
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
	

	            
    

   
    