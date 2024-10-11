#include<stdio.h>

int calculate_remainder(int n, int r){
	int calculate_remainder, a;
	while(n>=r){
		n-=r;
	}
	calculate_remainder=n;
	return calculate_remainder;
	
	
}

int main (){
	
	int n, r;
	printf("pls enter two number:");
	scanf("%d %d", &n, &r);
	printf("%d %% %d=%d", n, r, calculate_remainder(n,r));
	return 0;	
}
