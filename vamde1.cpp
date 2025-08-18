#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
}

void phatsinhmang(int a[],int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand();
 	}
}
void xuatmang(int a[],int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("a[%d]:%d",i+1,a[i]);
	}
}

int ghimang(char* input.txt,int a[],int n){
	FILe* f= fopen(input.txt,"w");
	if(!f)
	return 0;
	for(int i=0;i<n;i++){
		fprintf(f,"%d\t",a[i]);
		
		fclose(f);
		return 1;
	}
}

int focfile(char* input txt,int a[],int &n){
	FILE* f = fopen(filename,"r");
	if(!f)
	return 0;
	int i=0;
	while(!feof(f)){
		fscanf(f,"%d",&a[i]);
		i++;
	}
	n=i;
}
