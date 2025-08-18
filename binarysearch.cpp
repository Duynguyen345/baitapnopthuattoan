#include <stdio.h>
#include <stdlib.h>


bool binarysort(int a[],int n,int x){
	int l=0;
	int r=n-1;
	
	while(l<=r){
		int mid = (r+l)/2;
		if(a[mid]==x){
			return true;
		}
		else if(a[mid]<x){
			
			l = mid +1;
		}
		else{
			r = mid -1;
		}
	}
	return false;
	
}

int main(){
	int a[100];
	int n,x;
	printf("vui long nhap n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("nhap phan tu muon tim:");
	scanf("%d",&x);
	if(binarysort(a,n,x)){
		printf("da tim thay!");
	}
	else printf("khong tim thay!!!");


}
