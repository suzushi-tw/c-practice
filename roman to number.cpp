#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<stdlib.h>
using namespace std;

int romantointeger(char s[], int n){
	map<string, int>value;
	value["I"]=1; 
	value["V"]=5;
	value["X"]=10;
	value["L"]=50;
	value["C"]=100;
	value["D"]=500;
	value["M"]=1000;
	int temp=0;
	
	//for(int i=0; i<n; i++){
	//	int k=value.find(string(1, s[i]))->second;
	//	if(i+1<n){
	//		int f=value.find(string(1, s[i+1]))->second;
			
	//		if(k>=f){
	//			temp=temp+k;
	//		}
	//		else{
	//			temp=temp+f-k;
	//			i++;
	//		}
	//	}
	//	else{
	//		temp=temp+k;
	//	}
	//}
	int k=n-1;
	int d=0;
	for(int i=k; i>=0; i--){
		int j=value.find(string(1, s[i]))->second;
		if(j>=d){
			temp=temp+j;
		}
		else{
			temp=temp-j;
		}
		d=j;
	}
	
	
	return temp;
}

int main(){
	int n;
	cout<<"pls enter the amount of roman numbers:\n";
	scanf("%d", &n);
	char s[n];
	fflush(stdin);
	cout<<"pls enter the roman number to be converted into integer:\n";
	for(int i=0; i<n; i++){
		scanf("%c", &s[i]);
	}
	int result=0;
	
	result=romantointeger(s, n);
	cout<<"the result is:"<<result;
	return 0;
}
