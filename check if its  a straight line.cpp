#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

bool checkline(int **m, int c){
	int dx=m[1][1]-m[0][1];
	int dy=m[1][0]-m[0][0];
	for(int i=2; i<c; i++){
		if(dx*(m[i][0]-m[1][0]) != dy*(m[i][1]-m[1][1])){
			return false;
		}
	}
	return true;
}

int main(){
	cout<<"pls enter amount of coordinates:";
	int c;
	scanf("%d", &c);
//	int **m=(int**)malloc(c*sizeof(int*));
//	for(int i=0; i<c;i++){
//		m[i]=(int*)malloc(c*sizeof(int));
//	}

//	int **array;
//	array = new int *[10];
//	for(int i = 0; i <10; i++)
//  array[i] = new int[10];

	int **m;
	m= new int*[c];
	for(int k=0; k<c; k++){
		m[k]=new int[2];
	}
	for(int i=0; i<c; i++){
		for(int k=0; k<2; k++){
			printf("Enter element %d%d  ", i+1,k+1);
			scanf("%d", &m[i][k]);
		}
	}
	int result=0;
	result=checkline(m, c);
	if(result==1){
		cout<<"it is a straight line";
	}
	else{
		cout<<"it is not a straight line";
	}
	return 0;
}

