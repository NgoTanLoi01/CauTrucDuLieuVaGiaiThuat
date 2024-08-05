#include<stdio.h>

struct ket_qua {
	int i_max;
	int max_length;
};


ket_qua timDayConLienTucTangDaiNhat(int a[100], int n){
	ket_qua kq;
	
	kq.i_max = 0;
	kq.max_length = 1;
	
	for(int i=0; i<n; i++){
		int j = i;
		int length = 1;
		while(j<n && a[j]<=a[j+1]){
			j++;
			length++;
		}
		if(length>kq.max_length){
			kq.max_length = length;
			kq.i_max = i;
		}
	}
	return kq;
}

int main(){
	int a[100];
	int n;
	
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	
	printf("Nhap vao day so: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	ket_qua k = timDayConLienTucTangDaiNhat(a, n);
	
	printf("\nDo dai day con lien tuc tang dai nhat la: %d", k.max_length);
	printf("\nTu vi tri %d", k.i_max);
	
}
