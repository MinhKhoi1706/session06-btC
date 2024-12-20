#include<stdio.h>

int main(){

	int pass = 0;
	
	printf("moi ban nhap mat khau");
	scanf("%d", &pass);
	
	if(pass == 12345){
	printf("\nmat khau chinh xac");
	}
		
	else{
	printf("\nmat khau khong chinh xac");
	}
	
	return 0;
}
