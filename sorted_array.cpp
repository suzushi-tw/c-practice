#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int n, i, k, j, m, temp;
	
	printf("pls enter number for num2:");
	scanf("%d", &k);
	int num2[k];
	for(int j=0;j<k;j++){
		scanf("%d", &num2[j]);
	}
	
	printf("pls enter number for num1:");
	scanf("%d", &n);
	int num1[n+k];
	for(int i=0; i<n; i++){
		scanf("%d", &num1[i]);
	}
	
	m=n+k;
	
	for(i=n;i<n+k;i++){
		num1[i]=num2[i-n];
	}
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(num1[i]>num1[j]){
				temp=num1[i];
				num1[i]=num1[j];
				num1[j]=temp;
			}
			for(int k=0;k<m;k++){
				printf("%d ", num1[k]);
			}
			printf("%d %d\n", i, j);
		}
	}
	for(int k=0;k<m;k++){
		printf("%d ", num1[k]);
	}
	return 0;
}
