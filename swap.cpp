#include<stdio.h>

void swap(int &a, int &b){
	
	int i;
	i=a;
	a=b;
	b=i;
	
}

int main (){
int a=3, b=5;

swap(a,b);
printf("%d %d",a,b);	
	
return 0;	
}
