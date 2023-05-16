//Menu Tong hop 4 bai
#include<stdio.h>
#include<math.h>
int main (){
	
	int chon = 1;
	int min,max,avg;
    int i = min ;
	int sum = 0;
	int count = 0;
	int n,num;
	int a = 0;
	while(true){
		system("cls");
		printf (" ++------------------Menu LAB4-----------------++");
		printf("\n |Chuc nang 1: CT Tinh TBC cac so chia ht cho 2 | ");
		printf("\n |Chuc nang 2: CT xac dinh so NG To             |");
		printf("\n |Chuc nang 3: CT KT so chinh phuong            |");
		printf("\n |Chuc nang 0: Thoat                            |");
		printf ("\n ++--------------------------------------------++");
		printf("\n Xin moi chon cac chuc nang(1,2,3,0):");
		scanf("%d",&chon);
		switch(chon){	
	  case 1: printf("***--------------CT Tinh TBC cac so chia ht cho 2 ***------------------\n");
			
			printf("Nhap min and Max : \n");
		    scanf("%d%d",&min,&max);	
		    while ( i <= max ){
		    	
		    	if (i % 2 == 0){
		    		printf("%3d \n", i);
		    		
		    		sum += i; // sum = sum + i;
		    		count++;
		    		
				}
		    	i ++;
			}
			avg = sum / count ;
			printf("\n TBC cac so chia ht cho 2: %3d \n",avg);
				system("pause");
			break;
		case 2: printf("CT xac dinh so NG To \n");
			         printf("So nguyen: \n");
			       	scanf("%d",&n);
				    if(n < 2){
					printf(" ==> %3d  khong phai la so Ng To \n",n);
					system("pause");
					
					}
					 a = 2 ;
					while( a < n){
						if( n % a == 0 ){
							count ++;
						}
						a++;
					}
					if(count > 0){
						printf(" ==> %3d khong phai la so NG To \n", n);
						system("pause");
					} else {
						printf(" ==> %3d la so NG To \n", n);
						system("pause");
					} 
					break;
		case 3: 	printf("CT KT so chinh phuong \n");
								 num;
								printf("Nhap so : \n");
								scanf("%d",&num);
								 count = 0;
								 a = 0;
								while( a < num/2){
									if(a*a == num){
										printf("==> %3d la so chinh phuong ",num);
										
									count ++;
								
									break;
								}
								a++;
								}system("pause");
								if( count == 0){
									printf(" ==> %3d khong phai la so chinh phuong \n",num);
									}system("pause");
									break;
		case 0: printf("Thoat");return 0;
									
									
									
										        	
					
}
 	
}
		
}
