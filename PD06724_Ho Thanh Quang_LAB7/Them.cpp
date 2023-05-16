#include<stdio.h>
#include<string.h>
int main(){
	printf("CT nhap ten tim SV \n");
	char ho[50],ten[50];
	char*t;
	printf("Nhap Ho va ten lot: ");
	gets(ho);
	printf("Ten: ");
	gets(ten);
	printf("Ho va ten = chu hoa: %s \n",strupr(strcat(ho,ten)));
	printf("Ho Ten can tim: ");gets(ten);
	t = strstr(strcat(ho,ten), ten);
	if(ten != 0){
		printf("Tim thay ten");
	}else{
		printf("Ko tim thay ten");
	}
return 0;
}