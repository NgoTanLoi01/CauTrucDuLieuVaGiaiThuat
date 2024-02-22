#include <stdio.h>
#include "stdlib.h"
int jumpSearch(int a[], int k, int n){
	int d = 3; //so tu nhien lon hon 1
	int i = 0;
	int j = i +d;
	
	while (j<n && a[j] < k){ //nhay theo buoc d
		j = j + d;
		i = i + d;
	}
	
	if(j >= n)
		j = n - 1;
		
	while (a[i] < k){
		i = i + 1;
		if (i >= n || i > j)
		return -1;
	}
	
	if (a[i] == k)
		return i;
	else
		return -1;
}

int main(){
	int a[100];
	int k, n;
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("JumpSearch.txt", "r");
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
	
	printf("\nVi tri cua k: %d", jumpSearch(a, k, n));

}
