#include <stdio.h>
#include "stdlib.h"
int linearSearch(int a[], int k, int n){
	a[n] = k;
	int i = 0;
	while (a[i]!=k){
		i = i+1;
	}
	if(i<n){
		return i;
	}else{
		return -1;
	}
}

int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("LinearSearch.txt", "r");
	if(f==NULL){
		printf("\ Loi tao hoac mo file!");
		exit(1);
	}
	//3 Doc du lieu
	fscanf(f, "%d", &n);
	fscanf(f, "%d", &k);
	for(int i=0; i<n; i++){
		fscanf(f, "%d", &a[i]);
	}
	//4 Dong file
	fclose(f);
	
	printf("\nVi tri cua k: %d", linearSearch(a, k, n));

}
