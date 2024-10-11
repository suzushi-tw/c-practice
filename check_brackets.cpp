#include<stdio.h>


char bracket_inverter(char b[],int j){
	
	if(b[j]==']'){
		return '[';
	}
	if(b[j]=='}'){
		return '{';
	}
	if(b[j]==')'){
		return '(';
	}
}



int main(){
	
	int n,i=1;
	
	printf("ple enter number of brackets:");
	scanf("%d", &n);
	char b[n];
	
		scanf("%s", b);
	
	for(int j=1;j<=n;j+=2){
		if(b[j-1]!=bracket_inverter(b, j)){
			i=0;
			break;
		}
	}
	if(i==1){
		printf("true");
	}
	else {
		printf("false");
	}
	return 0;
	
}

