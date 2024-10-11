#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

void dailytemp(int temp[], int d, int* ans){
	stack<int>progress;

	for(int i=0; i<d; i++){
		while(!progress.empty() && temp[progress.top()]<temp[i]){  
			 ans[progress.top()]=i-progress.top();
			 progress.pop();
		}
		ans[i]=0;
		progress.push(i);
	}
}

int main(){
	int d;
	cout<<"pls enter the number of days:\n";
	scanf("%d", &d);
	int temp[d];
	cout<<"pls enter the temperature for each day:\n";
	for(int i=0; i<d; i++){
		scanf("%d", &temp[i]);
	}
	int ans[d];
	dailytemp(temp, d, ans);
	for(int j=0; j<d; j++){
		printf("%d ", ans[j]);
	}
	return 0;
}
