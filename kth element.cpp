#include<stdio.h>
#include<queue>
#include<iostream>
using namespace std;

int kth(int num[], int N, int K){
	priority_queue<int> q;
	for(int i=0; i<K; i++){
		q.push(num[i]*-1);
	}
	for(int j=K; j<N; j++){  		 
		q.push(num[j]*-1);
		q.pop();
	}
	return q.top()*-1;
}

int main(){
	int N=0;
	cout<<"pls enter amount of number:"<<"\n";
	scanf("%d", &N);
	int num[N]; 
	cout<<"pls enter a list of number"<<"\n";
	for(int i=0;i<N; i++){
		scanf("%d", &num[i]);
	}
	cout<<"pls enter the kth largest element you are looking for";
	int K=0;
	scanf("%d", &K);
	int solution=kth(num,N,K);
	cout<<"the solution is:"<< solution;
	return 0;
}


