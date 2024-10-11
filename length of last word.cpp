#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int lols (char*str){
	
	int i=0, stop=0, length=0, n=0;
	n=strlen(str)-1;
	for(i=n;i>=0;i--){
		if(str[i]==' '){
			stop=i+1;
			break;
		}
	}
	
	length=n-stop+1;
	
	return length;	
}


int main (){
	
	char str[500];
	//cin.getline(a, 500);
	printf("pls enter string:");
	//scanf("%s", &str);
	cin.getline(str, 500);
	printf("%d", lols(str));
	
	return 0;
}
