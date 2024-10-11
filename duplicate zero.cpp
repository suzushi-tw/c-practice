#include<stdio.h>


int zero_duplicates(int length, int *a)
{
    // Geben Sie hier ihren Code an
    
    int duplicate=0;
    for(int i=1;i<length;i++){
        for(int n=0; n<i;n++){
            if(a[i]==a[n]){
                a[i]=0;
                duplicate++;
                break;
            }
        }
    }
    return duplicate;
    
    
}
int main(){
	int a[] = {-3, -2, -1, -7, -3, 2, 3, 4, 2, 7, 10, 3};
	int length = 12;
	int count = zero_duplicates(length, a);
	printf("%d -- ", count);
	for(int i = 0; i < length; i++)
	printf(" %i ", a[i]);
	return 0;
}

