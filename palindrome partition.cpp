#include<stdio.h>
#include<iostream>
using namespace std;

int palindromepartition( ,int n){
	int k=n-1;
	int start=0;
	if(start>=k){
		return 0;
	}
	for(int i=0; i<n; i++){
		a[i][i]=1;
	}
	for(int k=0; k<n; k++){
		for(int f=0; f<n-k+1; f++){
			j=n-k+1;
			if(k==2){
				
			}
		}
	}
	
}

int main(){
	int n=0;
	cout<<"pls enter amount of characters:\n";
	scanf("%d", &n);
	char c[n];
	cout<<"pls enter the characters:\n";
	for(int i=0; i<n; i++){
		scanf("%c", &c);
	}
	int result=0;
	result=panlidromepartition(c, n);
}
