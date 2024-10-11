#include<stdio.h>
#include<stdlib.h>

enum Day{
	sunday=1, monday=2, tuesday=3, wednesday=4, thursday=5, friday=6, saturday=7,
}

int main(){
	
//	enum Day {
//		sunday;
//		monday;
//		tuesday;
//		wednesday
//		thrusday;
//		friday;
//		saturday;
//	};
	
//	enum Day weekend;
//	weekend= (enum day) n;
	enum Day d;
	int n;
	printf("ple enter nth day of week:");
	scanf("%d",&n);
	
	if(n==1 || n==7){
		printf("this is a holiday");
	}
	else {
		printf("this is not a holiday");
	}
	return 0;
}
