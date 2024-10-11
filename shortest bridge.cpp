#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void search(int **m, int j, int f, int c, int r){
	if(j<0 || f<0 || j>=r || f>=c){
		return;
	}
	if(m[j][f]!=1){
		return;
	}
	m[j][f]=2;
	search(m, j+1, f, c, r);
	search(m, j-1, f, c, r);
	search(m, j, f+1, c, r);
	search(m, j, f-1, c, r);
}

int shortestbridge(int **m, int r, int c){
	int count=0;
	for(int j=0; j<r; j++){ 
		for(int f=0; f<c; f++){
			if(m[j][f]==1){
				count++;
				//search(m, j, f, c, r);
				if(count==1){
					search(m, j, f, c, r);
				}
				else if(count==2){
					search(m, j, f, c, r);
				}
			}
			
		}
	}
	return count;
}

//int shortestbridge(){
	
//}

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
	result=shortestbridge(m, r, c);
	cout<<"the shortest bridge is"<<result;
	return 0;
}
