#include <stdio.h>

int main()

{

	int i,j,isPrime,Input;
	scanf("%d",&Input);
	for(i=2;i<Input;i++){
		isPrime=1;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d ",i);
		}
			
	}
	return 0;
	}



	
