#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

bool equal(char s[], int start, int i, string dictionary[], int d){
	if(i==start){
		return true;
	}
	for(int f=0; f<d; f++){
		string temp=dictionary[f];
		bool is=true;
		for(int k=start; k<i; k++){
			if(k-start>=temp.length()){
				is=false;
				break;
			}
			if(s[k]!=temp[k-start]){
				is=false;
				break;
			}
		}
		if(is==true){
			return true;
		}
	}
	return false;
}

bool wordbreak(char s[],int start,int end, string dictionary[], int d){
	if(start==end){
		return true;
	}
	for(int i=start; i<end; i++){
		//cout<<i<<" "<<start;
		if(i==3 && start==0){
			cout<<wordbreak(s, i+1, end, dictionary, d);
			cout<<equal(s, start, i+1, dictionary, d);
		}
		
		if(equal(s, start, i+1, dictionary, d)&&wordbreak(s, i+1, end, dictionary, d)){
			return true;
		}
	}
	return false;
}
//int a[];
//bool wordbreak(s, start, end, dictionary, d){
//	int ans=0;
//	if(start==end){
//		return true;
//	}
//	if(a[start]!=-1){
//		if(a[]==1){
//		return true;
//		}
//		else{
//		return false;
//		}
//	}
//	bool temp;
//	for(int k=0; k<d; k++){
//		for(int f=0; f<dictionary[k].size();f++){
//			if(dictionary[f]==s[k]){
//				ans=k;
//				break;
//				temp=wordbreak(s, start+1, end, dictionary, d);
//			}
//		}
//	}
//	return a[k]=temp;
//}

bool wordbreakdp(char s[],int start,int end,string dictionary[], int d){
	int dp[end+1];
	dp[0]=true;
	for(int i=1; i<=end; i++){
//		if(dp[i]==0){
//			break;
//		}
		for(int j=0;j<d; j++){
			if(dp[j] ){
				dp[i]=true;
				break;
			}
		}
	}
	return dp[end];
}

int main(){
	cout<<"ple enter the length of string:\n";
	int n;
	scanf("%d", &n);
	char s[n+1];
	cout<<"pls enter the string\n";
	scanf("%s", s);
	int d=0;
	cout<<"pls enter number of words:\n";
	scanf("%d", &d);
	cout<<"pls enter the string for dictionary:\n";
	string dictionary[d];
	for(int j=0; j<d; j++){
		cin>>dictionary[j];
	}
	
	int answer=0;
	int start=0;
	int answerdp=wordbreakdp(s, start, n, dictionary, d);
	answer=wordbreak(s, start, n, dictionary, d);
	cout<<"the answer is:"<<answer<<" "<<answerdp;
	return 0;
}
