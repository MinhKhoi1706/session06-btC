#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	int sum = 0;
	
	printf("nhap 5 so nguyen");
	printf("\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	
	if(a % 2 == 1){
	sum += a;
	printf("\ncac so le la %d,", a);
	}
	
	
	if(b % 2 == 1){
	sum += b;
	printf("%d,", b);
	}
	
	if(c % 2 == 1){
	sum += c;
	printf("%d,", c);
	}
	
	if(d % 2 == 1){
	sum += d;
	printf("%d,", d);
	}
	
	
	if(e % 2 == 1){
	sum += e;
	printf("%d,", e);
	}

	
	printf("\ntong cac so le la: %d",sum);
	
	return 0;
}
