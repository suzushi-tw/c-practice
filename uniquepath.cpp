#include<stdio.h>
#include<iostream>
using namespace std;


//void counter(int i, int j, int r, int c, int count){
//	if(i==r || j==c){
//		return;
//	}
//	if(i==r-1 && j==c-1){
//		count+=1;
//	}
//	counter(i+1, j, r, c, count);
//	counter(i, j+1, r, c, count);	
//}
//
//int uniquepath(int r, int c){
//	if(r==0 || c==0){
//		return -1;
//	}
//	int count=0;
//	counter(0,0, r, c, count);
//	return count;
//}

int uniquepath(int r, int c)
{
    // If either given row number is first or given column
    // number is first
    if ( r== 1 || c == 1)
        return 1;
 
    // If diagonal movements are allowed then the last
    // addition is required.
    return uniquepath(r - 1, c)+ uniquepath(r, c - 1);
}

int uniquepathdp(int r, int c){
	int dp[r][c];
	for(int s=0; s<r; s++){
		dp[s][0]=1;
	}
	for(int l=0; l<c; l++){
		dp[0][l]=1;
	}
	for(int i=1; i<r; i++){
		for(int k=1; k<c; k++){
			dp[i][k]=dp[i-1][k]+dp[i][k-1];
		}
	}
	return dp[r-1][c-1];
}

int main(){
	cout<<"enter the size ofmatrix:\n";
	int r=0;
	cout<<"pls enter number of rows:\n";
	scanf("%d", &r);
	int c=0;
	cout<<"pls enter number of columns:\n";
	scanf("%d", &c);
	int result=0;
	result=uniquepath( r, c);
//	if(result==-1){
//		cout<<"the path is not possible:";
//	}
//	else{
		cout<<"the number of path is :"<<result;
//	}
	int result2=0;
	result2=uniquepathdp( r, c);
	cout<<"the number of path using dp is:"<<result2;
	return 0;
}
