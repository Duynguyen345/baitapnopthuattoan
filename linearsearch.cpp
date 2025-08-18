#include <stdio.h>
#include <stdlib.h>

int linear_upgradedsearch(int a[],int find,int n){

	 a[n]= find;
	int i=0;
	while(a[i] != find)
	i++;
	if(i<n) return i;
	return -1;
}

int main(){
	int a[100];
	int n,find;
	printf("vui long nhap n:");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("nhap phan tu thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("nhap phan tu muon tim:");
	scanf("%d",&find);
	int ans = linear_upgradedsearch(a,find,n);
	
	if(ans == -1) printf("khong tim thay!!!");
	else printf("da tim thay!!!");
	}

