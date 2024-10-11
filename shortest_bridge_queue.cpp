#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;

//dfs
void increaseisland(int **m, int n, int i, int j){
	if(i>=n || j>=n || m[i][j]==0 || m[i][j]==2){
		return;
	}
	m[i][j]=2;
	increaseisland(m, n, i-1, j);
	increaseisland(m, n, i+1, j);
	increaseisland(m, n, i, j+1);
	increaseisland(m, n, i, j-1);
}


int shortestbridge(int **m, int n){
	queue<pair< int, int> >q;
	int check=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			increaseisland(m, n, i, j);
			break;
		}
	}
	for(int k=0; k<n; k++){
		for(int f=0; f<n; f++){
			if(m[k][f]==2){
				q.push(make_pair(k,f));
			}
		}
	}
	int length=0;
	while(!q.empty()){
		pair<int,int>start;
		int check=q.size();
		for(int h=check; h>0; h--){
			start=q.front();
			q.pop();
			int x=start.first;
			int y=start.second;
			if(m[x][y]==1){
				return length;
			}
			if(m[x][y]==0){
				m[x][y]=-1;
				q.push(make_pair(x,y));
			}
		}
		length++;
	}
	return -1;
}

int main(){
	
	int n=0;
	cout<<"pls enter the size of a matirx (n*n):\n";
	scanf("%d", &n);
	cout<<"pls enter the element of the matrix\n";
	int **m=(int**)malloc(n*sizeof(int*));
	for(int i=0; i<n;i++){
		m[i]=(int*)malloc(n*sizeof(int));
	}
	for(int i=0; i<n; i++){
		for(int k=0; k<n; k++){
			printf("Enter element %d%d  ", i+1,k+1);
			scanf("%d", &m[i][k]);
		}
	}
	int result=0;
	result=shortestbridge(m, n);
	if(result==-1){
		cout<<"the bridge is not possible";
	}
	else{
		cout<<"the shortest length of the  bridge is:"<<result;
	}
	return 0;
}
