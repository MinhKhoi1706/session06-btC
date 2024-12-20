#include<stdio.h>

int main(){
	
	int a,b,c,d,e;
	int sum = 0;
	int count_odd = 0;
	int count_even = 0;
	
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
	count_odd++;
	}
	else{
	count_even++;
	}
	
	if(b % 2 == 1){
	sum += b;
	printf("%d,", b);
	count_odd++;
	}
	else{
	count_even++;
	}
	
	if(c % 2 == 1){
	sum += c;
	printf("%d,", c);
	count_odd++;
	}
	else{
	count_even++;
	}
	
	if(d % 2 == 1){
	sum += d;
	printf("%d,", d);
	count_odd++;
	}
	else{
	count_even++;
	}
	
	
	if(e % 2 == 1){
	sum += e;
	printf("%d,", e);
	count_odd++;
	}
	else{
	count_even++;
	}

	
	printf("\ntong cac so le la: %d",sum);
	printf("\nso luong so le trong cac so da nhap la %d",count_odd);
	printf("\nso luong so chan trong cac so da nhap la %d",count_even);
	
	return 0;
}
