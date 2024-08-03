#include<stdio.h>

struct ket_qua {
	int tong;
	int bat_dau;
	int ket_thuc;
};

int tinhTong(int a[100], int bat_dau, int ket_thuc){
	int tong = 0;
	for(int x = bat_dau; x <= ket_thuc; x++){
		tong+=a[x];
	}
	return tong;
}

ket_qua timTongCongCoTongLonNhat(int a[100], int n){
	ket_qua kq;
	kq.tong = a[0];
	kq.bat_dau = 0;
	kq.ket_thuc = 0;
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int tong = tinhTong(a, i, j);
			if(tong>kq.tong){	
				kq.tong = tong;
				kq.bat_dau = i;
				kq.ket_thuc = j;
			}
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
	
	ket_qua k = timTongCongCoTongLonNhat(a, n);
	
	printf("\nTong con lien tuc lon nhat la: %d", k.tong);
	printf("\nTu vi tri %d den vi tri %d", k.bat_dau, k.ket_thuc);
	
}
