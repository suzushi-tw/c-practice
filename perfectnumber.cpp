#include<stdio.h>

int main (){
	
	
	int x,sum;
	
	printf("pls enter an integer x:");
	scanf("%d", &x);
	
	for(int i=1;i<x;i++){
		if(x%i==0){	
			sum+=i;	
		}
	}
	if(sum==x){
		printf("true");
	}
	else if(sum!=x){
		printf("false");
	}

	return 0;
	
}
