#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int r;
	cout<<"pls enter number of rows:\n";
	scanf("%d", &r);
	int c;
	cout<<"pls enter number of columns:\n";
	scanf("%d", &c);
	cout<<"pls enter the elements of the matrix:\n";
	int m[r][c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("Enter element %d%d  ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
	int k=0;
	int left=0;
	int right=c-1;
	int top=0;
	int bottom=r-1;
	
	while(left<=right && top<=bottom){
		for(k=left; k<=right; k++){
			cout<<m[top][k]<<" ";
		}
		top++;
		for(k=top; k<=bottom; k++){
			cout<<m[k][right]<<" ";
		}
		right--;
		if(top<=bottom){
			for(k=right; k>=left; k--){
				cout<<m[bottom][k]<<" ";
			}
			bottom--;
		}
		if(left<=right){
			for(k=bottom; k>=top; k--){
				cout<<m[k][left]<<" ";
			}
			left++;
		}
	}
	return 0;
}
