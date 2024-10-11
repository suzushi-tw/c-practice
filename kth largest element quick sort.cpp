#include<stdio.h>
#include<iostream>
using namespace std;

void printarray(int nums[], int N){
	for(int i=0; i<=N; i++){
		printf("%d", nums[i]);
	}
	printf("\n");
}

int devide(int nums[], int s, int N){
	int i=s-1;
	int pivot=nums[N];
	int temp=0;
	for(int f=s; f<=N-1; f++){
		if(nums[f]>=pivot){
		
			i++;
			temp=nums[i];
			nums[i]=nums[f];
			nums[f]=temp;
		}
	}
	temp=nums[i+1];
	nums[i+1]=nums[N];
	nums[N]=temp;
	return i+1;
}


int quickselect(int nums[], int s, int N, int k){
	int l=devide(nums, s, N);

	int length=l-s+1;
	if(length==k){
		return nums[l];
	}
	else if(k<length){
		return quickselect(nums, s, l-1, k);
	}
	else{
		return quickselect(nums, l+1, N, k-length);
	}
}

//int findkthlargest(int nums; int, int N, int K){
//	int k=N-K;
//	quickselect()
//}


int main(){
	int N;						//using heap so we dont need to go through entire array or average time complex
	cout<<"pls enter the amount of numbers: "<<"\n";
	scanf("%d", &N);
	cout<<"pls enter a list of numbers";
	int nums[N];
	for(int i=0; i<N; i++){
		scanf("%d", &nums[i]);
	}
	int K;
	cout<<"number of largest element to find:"<<"\n";
	scanf("%d", &K);
	int answer;
	answer=quickselect(nums, 0, N-1, K);
	cout<<"the solution is:"<<answer;
	return 0;
}
