#include<stdio.h>
int main(void){
	
int number1, number2, i,hcf;
	
	printf("enter two number");
	scanf("%d %d",&number1,&number2);
	for(i=1;i<=number1&&i<=number2;i++){
		if(number1%i==0 && number2%i==0){
		
		hcf=i;	
			}
		
		}
	printf("%d ",hcf);
	return 0;
	
}
