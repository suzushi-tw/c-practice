#include<stdio.h>

void move(int n, char A, char B, char C){
	if(n==1){
		printf("move one ring from  %c to %c \n", A, C);                    
	}
	else {		
		move(n-1, A, C, B);
		move(1, A, B, C);
		move(n-1, B, A, C);
	}
}


int main (){
	
	int n;
	printf("pls enter the amount of rings on tower A:");
	scanf("%d", &n);
	
	move(n, 'A', 'B', 'C');
	
	return 0;
	
} 
