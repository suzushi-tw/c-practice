#include<stdio.h>

int main (){
	
	int n;
	double tax=0;
	
	printf("pls enter your income:");
	scanf("%d", &n);
	
	if(n>9000){
		tax+=(n-9000)*0.25;
		n=9000;
	}
	if(n>4500 && n<=9000){
		tax+=(n-4500)*0.2;
		n=4500;
	}
	if(n>3500 && n<=4500){
		tax+=(n-3500)*0.1;
		n=3500;
	}
	if(n<=3500){
		tax+=(n)*0.03;
	}
	printf("%f", tax);
	return 0;
}
