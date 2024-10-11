#include<stdio.h>

int main (){
	
	int n;
	double tax;
	
	printf("pls enter your income");
	scanf("%d",&n);
	
	if(n<=1000){
		tax=0;
	}
	else if(n<=2000 && n>1000){
		tax=(n-1000)*0.05;
		
	}
	else if(n<=3000 && n>2000){
		tax=(n-2000)*0.1;
		
	}
	else if(n<=6000 && n>3000){
		tax=(n-3000)*0.15;
		
	}
	else if(n>6000){
		tax=n*0.2;
	}
	
	printf("%f",tax);
return 0;
}
