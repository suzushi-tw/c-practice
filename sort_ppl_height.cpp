#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int  j, n, k, cache,f;
	char i, temp_name;
	
	printf("pls enter number of names:");
	scanf("%d", &i);
	char names[i*10];
	for(int j=0; j<i*10;j+=10){
		scanf("%s", &names[j]);
	}
	
	printf("pls enter their respective hieghts:");
	scanf("%d", &n);
	int heights[n];
	for(int k=0; k<n;k++){
		scanf("%d", &heights[k]);
	}
	int arr[i];
	for(int f=0;f<i;f++){
		arr[f]=f+1;
	}
	for(int j=0;j<i;j++){
		for(int k=j+1; k<i;k++){
			if(heights[j]<heights[k]){
			cache=heights[j];
			heights[j]=heights[k];
			heights[k]=cache;
			temp_name=arr[j];
			arr[j]=arr[k];
			arr[k]=temp_name;
			}
		}
	}
	for(int j=0;j<i;j++){
		printf("%s ", &names[(arr[j]-1)*10]);
	}
	
	return 0;	
}
