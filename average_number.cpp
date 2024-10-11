#include<stdio.h>

int main(){

int number[100]={1,2,3};

int sum=0,i=0;
double average;

	for(i=0;i<=100;i++){
		sum=sum+number[i];
	}
	average=(double)sum/i;
	printf("%f",average);
	
	

	return 0;
}
