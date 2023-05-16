#include<stdio.h>
int ucln(int a , int b){
	if(a == 0|| b == 0){
		return a+b;
	}
	while( a != b){
		if(a> b){
		 a = a - b;
		 
		}else{
			b = b - a;
		}
	}
	return a;
}
int bscnn ( int a, int b){
	return a * b / ucln(a,b);
	
}
int main (){
		printf("CT Tim so chung lon nhat \n");
		int uc = ucln(27,45);
	printf(" Uoc chung lon nhat la %d \n",uc);
		int bs = bscnn(27,45);
		printf(" Boi so chung nho nhat la %d \n",bs);
	
}
