#include <stdio.h>
#include "stdlib.h"

void naturalSort(int a[100] , int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++)
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
}

int main(){
	int n;
	int a[100];
	
	printf("Nhap vao so luong phan tu n: ");
	scanf("%d" ,&n);
	
	printf("Nhap vao day so: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	// Goi ham sap xep
	naturalSort(a, n);
	
	printf("\nDay so sau sap xep la: ");
	for(int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
}
