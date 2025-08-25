#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void insertsort(int a[],int n){
	for(int i=1;i<n;i++){
		int pos = i-1, x = a[i];
		while(pos >= 0 && x < a[pos] ){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] = x;
		
		printf("buoc %d: ",i);
	for(int k=0;k<n;k++){
		printf("%d ",a[k]);
	}
	printf("\n");
	}
	
}
int main(){
		int a[] = {10,3,7,4,2,8,5,12};
		int b[] = {14,33,27,10,35,19,42,44};
		printf("mang 1:\n");
		insertsort(a,7);
		printf("mang 2:\n");
		insertsort(b,8);
		printf("mang 1:\n");
	for(int i=0;i<=7;i++){
		printf(" %d",a[i]);
	}
		printf("\n");
	printf("mang 2:\n");

	for(int i=0;i<=8;i++){
		printf(" %d",b[i]);
	}
}


