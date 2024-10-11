#include<stdio.h>

int Fibonacci(int n){
	
	switch(n){
		case 5:
			return 5;
		case 4:
			return 3;
		case 3:
			return 2;
		case 2:
			return 1;
		case 1:
			return 1;
	
	}
}

int main(){
	int n;
	
	printf("enter number below 5");
	scanf("%d", &n);
	printf("%d", Fibonacci(n));
		
}
