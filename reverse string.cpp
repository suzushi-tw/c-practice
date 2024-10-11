#include<stdio.h>




int main (){
	
	int i, reverse=0, remainder;
	
	printf("enter a list of number:");
	scanf("%d", &i);
	
	while(i!=0){
		remainder=i%10;
		reverse=reverse*10+remainder;
		i/=10;
		
		
		
	}
	printf("%d", reverse);
	
	return 0;
	
	
	
}
