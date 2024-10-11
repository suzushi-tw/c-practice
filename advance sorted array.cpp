#include<stdio.h>


void merge(int num1[], int n, int num2[], int m, int total[]){
	
	int i=0, j=0, k=0;
	
	while(i<n && j<m){
		if(num1[i]<num2[j]){
			total[k]=num1[i];
			i++;
			k++;       //save and move to next one
		}
		else {
			total[k]=num2[j];
			j++;
			k++;
		}
	}
	while(i<n){
		total[k]=num1[i];
		k++;
		i++;
	}
	while(j<m){
		total[k]=num2[j];  //or i?
		k++;
		j++;
	}
	
	
}

int main(void){
	int n,m,t,i,j;
	
	printf("pls enter total number for num1");
	scanf("%d", &n);
	printf("pls enter total number for num2");
	scanf("%d", &m);
	t=n+m;
	int num1[t];
	for(i=0; i<n;i++){
		scanf("%d", &num1[i]);
	}
	int num2[m];
	for(j=0; j<m; j++){
		scanf("%d", &num2[j]);
	}
	int total[t];
	//while(i<n && j<m && i>=0 && j>=0){
	//	if(num1[i]<num2[j]){
	//		num1[t++]=num1[i++];         //--not working so try plus instead
	//	}
	//	else {
	//		num1[k++]=num2[j++];        //¦P¤W 
	//	}
	//}
	//while(i<=n && i>=0){
	//	num1[k++]=num2[i++];
//	}
	//while(j<m && j>=0){
//		num1
//	}
	merge(num1, n, num2, m, total);
	
	for(int i=0; i<t;i++){
		printf("%d ", total[i]);
	}
		
	return 0;
	
}
