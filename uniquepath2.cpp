#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int uniquepath(int **m, int r, int c, int k, int f){
	if(r==k || c==f){
		return 0;
	}
	if(m[k][f]==1){
		return 0;
	}
	//if(r==k-1 && c==f-1){
	//	return 1;
	//}
	if(k==r-1 && f==c-1){
		return 1;
	}
	return uniquepath(m, r, c, k+1, f)+uniquepath(m, r, c, k, f+1);
}

int uniquepathdp(int **m, int r, int c, int k, int f){
	int dp[r][c];
	dp[0][0]=1;
	for(int i=0; i<c; i++){
		if(m[0][i]==0){
			dp[0][i]=dp[0][i-1];
		}
	}
	for(int j=0; j<r; j++){
		if(m[j][0]==0){
			dp[j][0]=dp[j-1][0];
		}
	}
	for(int k=1; k<r; k++){
		for(int f=1; r<c; f++){
			if(m[k][f]==0){
				dp[k][f]=dp[k-1][f]+dp[k][f-1];
			}
		}
	}
	return dp[r-1][c-1];
}

int main(){
	int r;
	cout<<"pls enter number of rows\n";
	scanf("%d", &r);
	int c;
	cout<<"pls enter number of columns\n";
	scanf("%d", &c);
	cout<<"pls enter the element of the matrix\n";
	int **m=(int**)malloc(r*sizeof(int*));
	for(int i=0; i<r;i++){
		m[i]=(int*)malloc(c*sizeof(int));
	}
	for(int i=0; i<r; i++){
		for(int k=0; k<c; k++){
			printf("Enter element %d%d  ", i+1,k+1);
			scanf("%d", &m[i][k]);
		}
	}
	int result=0;
	result=uniquepath(m, r, c, 0, 0);
	int result2=0;
	result2=uniquepathdp(m, r, c, 0, 0);
	cout<<"the number of path  is"<<result;
	cout<<"the number of path using dp is:"<<result2;
	return 0;
}

