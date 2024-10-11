#include<stdio.h>
#include<iostream>
using namespace std;
//dynamic programming approach method
int a[300];
int countBST(int N){
	a[0]=1;
	for(int i=1; i<=N; i++){
		a[i]=0;
		for(int j=1; j<=i; j++){
			a[i]+=a[j-1]*a[i-j];
		}
	}
	return a[N];
} 

int recursion(int N){
	int answer=0;
	if(N==0){
		return 1;
	}
	for(int k=0; k<N; k++){
		answer+=recursion(k)*recursion(N-1-k);
	}
	return answer;
}

int main(){
	int N=0;
	cout<<"Enter a number:"<<"\n"; 
	scanf("%d", &N);
	int result=0;
	result=countBST(N);
	cout<<"the number of BST that can be constructed is:"<<result;
	int result2;
	result2=recursion(N);
	cout<<"number of BST calc. using recursive methode is:"<<result2;
	return 0;
	
}

// time complex n^2
