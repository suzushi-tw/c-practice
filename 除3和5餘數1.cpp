#include<stdio.h>

int main (){

	int i, j, prime;
	
	for(j=2;j<=1000;j++){
		;
		for(i=2;i<j;i++){
			
			if(j%i==0){
				;	
				break;
			}	
		
		}
		if(i==j){
			prime=j;
			if(prime%3==1 && prime%5==1){
				printf("%d ",prime);
			} 
		}
	}

return 0;
} 
