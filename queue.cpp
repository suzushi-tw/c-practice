#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;

void combine(int num[], int n){
	string map[8]={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
	//problem, not corresponding to 0 and 1
	//vector<string>map{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	queue<string> q;
	q.push("");
	vector <string> directory;
	string s;
	while(!q.empty()){
		string s = q.front();
        q.pop();
        if(s.length()==n){     //put into the list if complete
        	directory.push_back(s);
		}
		else {
			string cur=map[s.length()];
		for(int i=0;i<cur.length();i++){
			q.push(s+cur[i]);
		}
		}
    }
    for(vector<string>::iterator it=directory.begin(); it != directory.end(); it++){      //print the result 
    	cout<<*it<<" ";
	}
	
}

int main(){
	int n;
	printf("enter amount of number");
	scanf("%d", &n);
	int num[n];
	for(int i=0;i<n;i++){
		scanf("%d", &num[i]);
	}
	combine(num, n);
	
	return 0;
}
