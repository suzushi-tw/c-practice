#include<stdio.h>

int main (){
	int i=0, n=0;
	char str[50];
	
	printf("pls enter brackets consisting of (  and ) \n");
	scanf("%s", str);
	
	while(str[i]!='\0'){
		if(str[i]=='('){
			n++;
		}
		else if(str[i]==')'){
			n--;
			if(n<0){
				break;
			}
		}
		i++;
	}
	if(n==0){
		printf("valid");
	}
	else{
		printf("brackets invalid");
	}
	return 0;
	
}
