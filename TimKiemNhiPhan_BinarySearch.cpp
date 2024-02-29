#include <stdio.h>
#include "stdlib.h"
int binarySearch(int a[], int k, int n){
	int left = 0; int right = n-1;
	while (left <= right){
		int mid = (left + right) / 2; //Lay phan nguyen
		
		if(a[mid] == k)
			return mid;
		else if (a[mid] < k)
			left = mid + 1;
		else 
			right = mid -1;
	}
	return -1;
}

int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("BinarySearch.txt", "r");
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
	
	printf("\nVi tri cua k: %d", binarySearch(a, k, n));

}
