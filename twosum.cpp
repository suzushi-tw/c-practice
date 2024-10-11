#include<stdio.h>
#include<time.h>
int* two_sum(int a[],int n, int target){
	
	int two_sum, p[2];
	int result=0,max_element=0;
	
		
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			two_sum=a[i]+a[j];
			if(two_sum==target){
				p[0]=i;
				p[1]=j;
				return p;			
			}
		}	
	}

}


int main(){
	
	int n, target;
	printf("pls enter number:");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("pls enter taget value:");
	scanf("%d", &target);
	
	int *ans=two_sum(a, n, target);
	printf("%d %d",ans[0],ans[1] );
	
	return 0;
}
