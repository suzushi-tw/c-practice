#include<stdio.h>

int main (){
	
	int a=0, sum=0, n=0;
	
	printf("ple enter amount of numbers:");
	scanf("%d", &n);
	int nums[n];
	for(int i=0; i<n;i++){
		scanf("%d", &nums[i]);
	}
	
	for(int e=0; e<n; e++){
		if(nums[e]>1){
			printf("pls enter number only containing 1 and 0");
			printf("ple enter amount of numbers:");
			scanf("%d", &n);
			int nums[n];
			for(int i=0; i<n;i++){
				scanf("%d", &nums[i]);
			}
			break;
		}	
	}
	
	
	for(int j=0;j<n;j++){
		if(nums[j]==0){
			a=0;
		}
		else{
			if(sum<a){
				sum=a;
			}
			a++;
		}
	}
	if(sum<a){
		sum=a;
	}
	printf("%d", sum);
	return 0;
}

