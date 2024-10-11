#include<stdio.h>

int calculate(char str[]){
	int total=0, n=sizeof(str); 
	
	for(int i=0;i<n;i++){
		if(str[i]>='0' || str[i]<='9'){
			total=str[i];
		}
		if(str[i]=='('){
			n++;
		}
		if(str[i]==')'){
			n--;
			if(n<0){
				break;
			}
		}
		if(str[i]=='+'){
			total=total+str[i+1];
			i++;
			break;
		}
		if(str[i]=='-'){
			total=total-str[i+1];
			i++;
			break;
		}
	}
	return total;
	
}

int main (){
	int i=0, n=0;
	char str[50];
	
	printf("pls enter a string of math operations \n");
	scanf("%s", str);
	int l=sizeof(str);
	
	calculate(str);
	printf("the result is %d", str);
	
	return 0;
} 
