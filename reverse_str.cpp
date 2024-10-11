#include<stdio.h>
#include<string.h>

void strreverse (char*str){
	
	int i, length;
	char n;
	length=strlen(str);
	for(i=0;i<length/2;i++){
		n=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=n;
	}
	
	
	
	return;
}



int main(){
	
	char str[100];
	printf("ple enter string:");
	scanf("%s", &str);
	
	strreverse(str);
	printf("%s", str);
	
	return 0;
	
}




