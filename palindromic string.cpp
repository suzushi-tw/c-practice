#include<stdio.h>
#include<string.h>

char check_pair(char str[], int i, int j){       //according to check brackets
	while(i<j){
		if(str[i]!=str[j]){
			return false;
		}
		else {
			i++;   //maybe?
			j--;   //could be --;
		}
	}
	return true;  //when left and right equal move out by one   
}


int main(){
	
	
	char str[1000];
	
	printf("pls enter a string:");
	scanf("%s", str);
	
	int maxl=0;  //save the longest string so you dont have to chck again. 
	int start=0;
	int len=strlen(str);   //it shouldnt exceed the size of string
	
	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			if(j-i+1>maxl && check_pair(str, i, j)){
				maxl=j-i+1;
				start=i;
			}
		}
	}
	int i=0;
	for(i; i<maxl;i++){
		printf("%c", str[start+i]);
	}
	
	return 0;
	
	
	
}
