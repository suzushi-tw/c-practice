#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

//sort(){
//	return ()
//}

int mergeintervals(char a, int n){
	vector<int>result;
	int temp=0;
	if(n<=0){
		return result;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i+1; j++){
			if(result.begin>result.end){
				temp=result.begin;
				reuslt.begin=result.end;
				result.end=temp;
			}
		}
	}
	int k=a[0][0];
	int l=a[0][1];
	for(int f=0; f<n; f++){
		if(a[i][0]>l){
			result.pushback([k,l]);
			k=a[i][0];
			l=a[i][1];
		}
		else{
			if(r>a[i][1]){
				r=r;
			}
			else{
				r=a[i][1];
			}
		}
	}
	result.pushback({k,l});
	return result;
}

int main(){
	char s[];
	int n=0;
	cout<"pls enter the number of intervals\n";
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &s);
	}
	int result=0;
	result=mergeintervals(a, n);
	return 0;
}
