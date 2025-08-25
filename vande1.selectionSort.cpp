#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[],int n){
	int i,j,tmp;
	for(int i=0;i<n;i++){
		int index = i;
		for(j=i+1;j<n;j++){
			if(a[j] < a[index]) index = j;
			
		}
		
		tmp = a[index];
		a[index] = a[i];
		a[i] = tmp;
		
		printf("buoc %d:",i+1);
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
		selectionSort(a,7); 
		
		printf("mang 2:\n");
		selectionSort(b,7);
		
		printf("mang 1:\n");
		for(int i=0;i<=7;i++){
		printf(" %d",a[i]);
	}
	
		printf("\n");
		
		printf("mang 2:\n");
		for(int i=0;i<=7;i++){
		printf(" %d",b[i]);
	}
}

