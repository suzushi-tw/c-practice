#include<stdio.h>

int main (void){
	
	int F0=0, F1=1,input,x,y,z,n;
	
	scanf("%d",&input );
	if(input==0){
		printf("%d",F0);
	} 
	if(input==1){
		printf("%d",F1);
	}
	y=F0;
	z=F1;
	
	for(int i=2;i<=input;i++){
		if(i%3==2){
			x=y+z;
		
		}
		else if(i%3==0){
			y=x+z;
			
		}
		else if(i%3==1){
			z=x+y;
			
		}
	}
	if(input%3==2){
			printf("%d",x);
		
		}
		else if(input%3==0){
			printf("%d",y);
			
		}
		else if(input%3==1){
			printf("%d",z);
			
		}
//	for(input==2;y+z=x){
//		printf("%d",x)
//	}
//	for(input==3;z+x=y){
//		printf("%d",y)
//	}
//	for(input==4;x+y=z){
//		printf("%d",f)
//	}
//	for(input==5;y+z=x)
//	
//	for(input==6;z+x=y)
//	
//	for(input==7;x+y=z)
//	
	
		
	
	
	
	
	
}
