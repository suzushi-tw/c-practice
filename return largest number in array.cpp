#include<stdio.h>

int maximum(int a[],int n){
	
	int maximum;
	int result=0,max_element=0;
	
		
		for(int i=0;i<n;i++){
			if(max_element<a[i]){
			max_element=a[i];
			}	
		}
	result=max_element;
	
	maximum=result;
	return maximum;
	
}

int main(){
	
	int n;
	printf("pls enter number:");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d",maximum(a,n));
	
	return 0;
}
