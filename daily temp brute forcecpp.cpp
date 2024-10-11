#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> dailytemp(int temp[], int d){
	vector<int>ans;
	int n=d;
	for(int j=0; j<n; j++){
		int gap=0;
		for(int k=j+1; k<d; k++){
			if(temp[j]<temp[k]){
				gap=k-j;
				break;
			}
		}
		ans.push_back(gap);
	}
	return ans;
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
	vector<int> solution=dailytemp(temp, d);
	for(int i=0; i<d; i++){
		printf("%d ", solution[i]);
	}
	return 0;
}
