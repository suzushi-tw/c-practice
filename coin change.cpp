#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int coinexchange(int coin[], int money, int n){
	//int result;
	if(money==0){
		return 0;
	}
//	for(int i=0; i<n; i++){
//		if(coin[i]<=money){	
//			int temp=coinexchange(coin, moeny-coin[i], n);
//			
//			if(temp==result){
//				result=temp+1;
//			}
//		}
//	}
//	int result1=coinexchange(coin, money-coin[i], n);
//	int result2=coinexchange(coin, money, n+1);
//	int answer=min(result1, result2);
//	if(answer<0){
//		return -1;
//	}
//	if(result1=-1){
//		return -1;
//	}
//	if(result2=-1){
//		return -1;
//	}
//	
//	int count=0;
//	int mincount=INT_MAX;
//	int array[money+1];
//	array[0]=0;
//	while(money>0){
//		for(int i=n-1; i>=0; i--){
//			while(money>=coin[i]){
//				count++;
//				money-=coin[i];		
//			}
//		}
//	}
//	for(int i=n-1; i>=0; i--){
//		if(coin[i]<=money){
//			count=coinexchange(coin, money-coin[i], n);
//			if(count+1<mincount){
//				mincount=count+1;
//			}
//		}
//	}
	
	//memorization
//	for(int i=0; i<=money; i++){
//		array[i]=INT_MAX;
//	}
//	for(int k=0; k<=n; k++){
//		if(coin[k]<=money){
//			if(array[money-coin[k]]==INT_MAX){
//				count=coinexchange(coin, money-coin[k], n);
////				array[money-coin[k]]=count;
//			}
//			else{
//				count=array[money-coin[k]];
//				cout<<"hi";
//			}
//		}
//		if(count+1<array[money]){
//			array[money]=count+1;
//		}
//	}

	//dynamic programming
	int array[money+1];
	array[0]=0;
	for(int k=1; k<=money; k++){
		array[k]=INT_MAX;
	}
	for(int i=1; i<=money; i++){
		for(int j=0; j<n; j++){
			if(coin[j]<=i){
				if(array[i-coin[j]]==INT_MAX){
					continue;
				}
				int count=array[i-coin[j]];
				if(count+1<array[i]){
					array[i]=count+1;
				}	
			}
		}
	}
	if(array[money]==INT_MAX){
		return -1;
	}
	return array[money];
}

int main(){
	int n;
	cout<<"pls enter amount of different type of coins:\n";
	scanf("%d", &n);
	int coin[n];
	cout<<"pls enter the corrosponding coins:\n";
	for(int i=0; i<n; i++){
		scanf("%d", &coin[i]);
	}
	cout<<"pls enter the total amount of money:\n";
	int money;
	scanf("%d", &money);
	int result=0;
	result= coinexchange(coin, money, n);
	cout<<"the amount of coins required is:\n"<<result;
	return 0;
}
