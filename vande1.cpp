#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int  patrition(int a[],int l,int r){
	int pivot = a[r];
	int i = l-1;
	
	for(int j=l;j<r;j++){
		if(a[j] <= pivot){
			++i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i];
	a[i] = a[r];
	a[r] = tmp;
	return i;
}

void qsort(int a[],int l,int r){
	if(l>=r) return;
	int n = 1;
	printf("buoc %d:\n",n);
	for(int i=0;i<=7;i++){
		printf(" %d",a[i]);
		n++;
	}
	printf("\n");
	int p =	patrition(a,l,r);
	qsort(a,l,p-1);
	qsort(a,p+1,r);
}


int main(){
		int a[] = {10,3,7,4,2,8,5,12};
		int b[] = {14,33,27,10,35,19,42,44};
		printf("mang 1:\n");
		qsort(a,0,7);
		printf("mang 2:\n");
		qsort(b,0,8);
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
