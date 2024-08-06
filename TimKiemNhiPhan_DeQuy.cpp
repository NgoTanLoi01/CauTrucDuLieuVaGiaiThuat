#include<stdio.h>

int binarySearch(int a[100], int n, int k, int left, int right){
	if(left == right){
		if(a[left]==k){
			return left;
		}else{
			return -1;
		}
	}
	else{
		int mid = (left+right)/2;
		if(a[mid]==k){
			return mid;
		}else{
			// Goi ham de quy
			if(a[mid]<k){
				return binarySearch(a, n, k, mid+1, right);
			}else{
				return binarySearch(a, n, k, left, mid-1);
			}
		}
	}
}

int main(){
	int n;
	int a[100];
	int k;
	
	printf("Nhap vao so luong: ");
	scanf("%d", &n);
	
	printf("Nhap vao day so: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Nhap vao gia tri can tim: ");
	scanf("%d", &k);
	
	int x = binarySearch(a, n, k, 0, n-1);
	
	printf("Vi tri: %d", x);
}
