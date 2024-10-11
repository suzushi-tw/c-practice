#include<stdio.h>

int norm(int a, int b){
	int norm;
	norm=a*a+b*b;
	return norm;
}
int main (){
	
	int a=5, b=4;
	
	printf("%d", norm(a,b));



return 0;
}

