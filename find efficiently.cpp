#include<stdio.h>

int search(int nums[], int f, int l, int r){
	int mid=(l+r)/2;
	printf("%d", mid);               //maybe (r-1
	if(l>=r){
		return -1;
	}
	if(nums[mid]==f){
		return mid;
	}
	else if(nums[mid]>f){
		return search(nums, f, l, mid+1); 
	}
	else{
		return search(nums, f, mid-1, r);
	}
}

int main(){
	
	int n=0,f=0;
	
	printf("enter amount of numbers:");
	scanf("%d", &n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d", &nums[i]);
	}
	printf("enter number to be find:");
	scanf("%d", &f);
	int mid;
	mid=search(nums,f,0,n);
	if(mid==-1){
		printf("the location does not exist");
	}else {
		printf("the location is %d", mid);
	}
	return 0;
	
}
