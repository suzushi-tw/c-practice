#include<stdio.h>

int main(){
	
	int n,i,remainder,b;
	
	printf("enter two number:");
	scanf("%d %d", &n, &i);
	
	if(i>n){
	 	b=n;
	 	n=i;
	 	i=b;
	}
		while(i%n!=0){
		i=i%n;
		b=n;
	 	n=i;
	 	i=b;
		}
		printf("%d", n);
	return 0;
} 
