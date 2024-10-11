#include<stdio.h>
#include<iostream>
using namespace std;


//brute force approach
int container(int a[], int n){
	int i=0;
	int j=n-1;
	int answer=0;
	int solution=0;
	while(i<j){
		if(a[i]<=a[j]){
			solution=a[i]*(j-i);
			i++;
		}
		else{
			solution=a[j]*(j-i);
			j--;
		}
		if(solution>answer){
			answer=solution;
		}
	}
	return answer;
}

int main(){
	int n=0;
	cout<<"pls enter the height:\n";
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int result=0;
	result=container(a, n);
	cout<<"the max amount it can store is:"<<result;
	return 0;
}
