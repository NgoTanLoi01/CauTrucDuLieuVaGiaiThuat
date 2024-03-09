#include <stdio.h>
#include "stdlib.h"

int BubbleSort(int a[], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1; j++){
			if (a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}	
		}
	}
}


int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("BubbleSort.txt", "r");
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
	BubbleSort(a, n);
	
	
	//day so sap xep
		printf("\nDay so sap xep: ");
	for(int i = 0; i < n; i++){
		printf( "%d ", a[i]);
	}
	return 0;
}
