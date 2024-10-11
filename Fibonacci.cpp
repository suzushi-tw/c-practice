#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int n, F0=0, F1=1, Sum;
	
	printf("input n number and size to allocate");
	scanf("%d ",&n);
	
	int*n=(int*)malloc(sizeof(int)*n);
	
	for(i=1;i<=n;i++){
		Sum=F0+F1;
		Printf("%d", Sum);
		F0=F1;
		F1=Sum;
	
	
	
	
	} 
	
	
	
return0;
}
