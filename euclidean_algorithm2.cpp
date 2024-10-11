#include<stdio.h>

int main(){
	
	int i,n, temp;
	printf("pls enter two variable:");
	scanf("%d %d", &i, &n);
	
	if(n>i){
		temp=i;
		i=n;
		n=temp;
	}
	while(n>0){
		temp=i%n;
		i=n;
		n=temp;
	}
	
	printf("the greatest common factor is:%d", i);
	return 0;
	
}
