#include<stdio.h>

int main(){
	int n, result=0,max_element=0;
	
	scanf("%d", &n);
	int a[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(max_element<a[i]){
			max_element=a[i];
			}	
	}
	result=max_element;
	
	
	
	
	
	
//	for(int i=0; i<n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for(int i=0; i<n; i++){
//		printf("%d ", b[i]);
//	}
//	printf("\n");
	
	// do dot product and store it to result
	
	printf("%d",result);
}
