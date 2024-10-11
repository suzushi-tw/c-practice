#include<stdio.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;


void eval_expr(stack<pair<int, char> >& char_stack){
	if(char_stack.top().second !='i'){   //incase there is negative sign at front
		char_stack.push({0, 'i'});
	}
	int num=char_stack.top().first;
	char_stack.pop();
	while(!char_stack.empty() && char_stack.top().second != ')'){
		if(char_stack.top().second=='-'){
			char_stack.pop();
			num=num-char_stack.top().first;
			char_stack.pop();
		}
		else {
			char_stack.pop();
			num=num+char_stack.top().first;
			char_stack.pop();
		}
	}
	if(!char_stack.empty()){
		char_stack.pop();
	}
	
	char_stack.push({num, 'i'});
}

int main(){
	string s;
	stack<pair<int, char> > char_stack;
	int num=0;
	int order=1;
	
	cin>>s;
	for(string::reverse_iterator it=s.rbegin();it!=s.rend();it++)
		char c= *it;
		
		if(c >= '0'&& c<='9'){
			num+=(c-'0')*order;
			order*=10;
			if(it+1 == s.rend()){
				char_stack.push({num, 'i'});
			}
		}
		else{
			if(order>1){
				char_stack.push({num, 'i'});
				num=0;
				order=1;
			}
//			char_stack.push({0, c});
		}
		if(c=='('){
			eval_expr(char_stack);
		}
		else if(c< '0' || c> '9'){
			char_stack.push({0, c});
		}
		if(char_stack.size()>1){
			eval_expr(char_stack);
		}
		return 0;
}
