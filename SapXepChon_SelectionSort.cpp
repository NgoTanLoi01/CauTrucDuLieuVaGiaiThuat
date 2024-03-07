#include <stdio.h>
#include "stdlib.h"

int SelectionSort(int a[], int n){
	for (int i=0; i<n-1; i++){
		int i_min = i;
		int v_min = a[i];
		for(int j=i; j<n; j++){
			if(a[j]<v_min){
				v_min = a[j];
				i_min = j;
			}
		}
		int temp = a[i];
		a[i] = a[i_min];
		a[i_min] = temp;
	}
}


int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("SelectionSort.txt", "r");
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
	SelectionSort(a, n);
	
	
	//day so sap xep
		printf("\nDay so sap xep: ");
	for(int i = 0; i < n; i++){
		printf( "%d ", a[i]);
	}
	return 0;
}
