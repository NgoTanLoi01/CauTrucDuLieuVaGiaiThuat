#include <stdio.h>
#include "stdlib.h"

int InsertionSort(int a[], int n){
	for (int i = 1; i < n; i++){
		int j = i;
		while(j>0 && a[j] <= a[j - 1]){
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}
}


int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("InsertionSort.txt", "r");
	if(f==NULL){
		printf("\ Loi tao hoac mo file!");
		exit(1);
	}
	//3 Doc du lieu
	fscanf(f, "%d", &n);
	for(int i=0; i<n; i++){
		fscanf(f, "%d", &a[i]);
	}
	//4 Dong file
	fclose(f);
	
	//day so ban dau
	printf("Day so ban dau: ");
	for(int i = 0; i < n; i++){
		printf( "%d ", a[i]);
	}
	
	//sap xep
	InsertionSort(a, n);
	
	
	//day so sap xep
		printf("\nDay so sap xep: ");
	for(int i = 0; i < n; i++){
		printf( "%d ", a[i]);
	}
	return 0;
}
