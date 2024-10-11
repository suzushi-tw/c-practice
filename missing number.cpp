#include<stdio.h>

int main(){
	
	int n, temp;
	
	printf("pls enter amount of distinct numbers:");
	scanf("%d", &n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d", &nums[i]);
		if(nums[i]>n){
			printf("error");
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(nums[j]<nums[i]){
				temp=nums[j];
				nums[j]=nums[i];
				nums[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(nums[i]!=i){
			printf("%d", i);
		}
	}
	
	return 0;
	
}
