#include<stdio.h>
#include<iostream>
using namespace std;

int builstring(int low, int high, int zero, int one){
	 if(low>high){
	 	return 0;
	 }
	 int temp[high+1];
	 for(int k=0; k<high+1; k++){
	 	temp[k]=0;
	 }
	 temp[0]=1;
	 int i=0;
	 int ans=0;
//	 if(zero<one){
//	 	i=zero;
//	 }
//	 else{
//	 	i=one;
//	 }
	 for( i=1; i<=high; i++){
	 	if(i>=zero){
	 		temp[i]=temp[i]+temp[i-zero];      //add zero each time
		}
		if(i>=one){
			temp[i]=temp[i]+temp[i-one];       //add one each time
		}
		if(i>=low && i<=high){
			ans=ans+temp[i];
		}
	 }
	 return ans;
}

int main(){
	int low=0;
	cout<<"pls enter the lower bound of the string:\n";
	scanf("%d", &low);
	int high=0;
	cout<<"pls enter the higher bound of the string:\n";
	scanf("%d", &high);
	int zero=0;
	cout<<"pls enter amount of zero to append each time:\n";
	scanf("%d", &zero);
	int one=0;
	cout<<"pls enter amount of one to append each time:\n";
	scanf("%d", &one);
	int result=0;
	result= builstring(low, high, zero, one);
	cout<<"the result is:"<<result;
	
	return 0;
}
