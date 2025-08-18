#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Word{
	char eng[256];
	char vie[512];
}WORD;

void selectionSort(WORD dict[],int n){
	for(int i=0;i<n-1;i++){
		int index = i;
		for(int j=i+1;j<n;j++){
			if (strcmp(dict[j].eng,dict[index].eng)<0){
				index = j;
			}
		}
		if(index!=i){
		
		WORD tmp = dict[index];
		dict[index] = dict[i];
		dict[i] = tmp;
		}
	}
}
int binarySearch(WORD dict[],int n,const char *key){
	int l = 0;
	int r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		int cmp = strcmp(dict[mid].eng,key);
		if(cmp == 0){
			return mid;
		}
		else if(cmp <0){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return -1;
}

int main() {
    WORD dict[] = {
        {"dog", "con cho"},
        {"apple", "qua tao"},
        {"school", "truong hoc"},
        {"cat", "con meo"},
        {"book", "quyen sach"},
        {"house", "ngoi nha"}
    };
    int n = sizeof(dict) / sizeof(dict[0]);

    
    selectionSort(dict, n);

    
    printf("=== Tu dien da sap xep ===\n");
    for (int i = 0; i < n; i++) {
        printf("%s -> %s\n", dict[i].eng, dict[i].vie);
    }

    char word[50];
    printf("\nNhap tu tieng Anh muon tra: ");
    scanf("%s", word);

    int pos = binarySearch(dict, n, word);
    if (pos != -1)
        printf("Ket qua: %s -> %s\n", dict[pos].eng, dict[pos].vie);
    else
        printf("Khong tim thay!\n");

    return 0;
}
