#include<stdio.h>

void two_sum(int a[],int n, int target,int &k,int &f){
	
	int two_sum, i,j;	
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			two_sum=a[i]+a[j];
				if(two_sum==target){
					break;
				}
			}	
		}
	k=i;
	f=j;
	return ;
	
}


int main(){
	
	int n, target, i, j;
	printf("pls enter number:");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("pls enter taget value:");
	scanf("%d", &target);
	
	two_sum( a, n, target, i,j);
	printf("%d %d",i,j);
	
	return 0;
}
