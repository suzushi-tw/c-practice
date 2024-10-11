#include<stdio.h>

int main(){
	int n, result=0;
	
	scanf("%d", &n);
	int a[n], b[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	for(int i=0;i<n;i++){
		result+=a[i]*b[i];
	}
	
	
	
	
	
	
	
	
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
