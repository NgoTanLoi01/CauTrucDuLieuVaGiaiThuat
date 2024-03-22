#include <stdio.h>
#include <math.h>
#include <limits>


float distance(float xA, float yA, float xB, float yB){
	float d = sqrt((xB -  xA)*(xB -  xA) + (yB -  yA)*(yB -  yA));
	return d;
}

float min_distance(float x[100], float y[100], int n){
	float min = std::numeric_limits<float>::max();
	for (int i = 0; i < n-1; i++){
		for(int j = i+1; j<n; j++){
		float d = distance(x[i], y[i],x[j], y[j]);
		if(min > d){
			min = d;	
			}
		}
	}
	return min;
}

int main(){
	float x[100], y[100];
	int n;
	
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("Nhap vao toa do diem %d :", i);
		scanf("%f%f", &x[i], &y[i]);
	}
	// Xuat ra khoang cach cua tat ca cac diem:
	for (int i = 0; i < n-1; i++){
		for(int j = i+1; j<n; j++){
			printf("\nd(%d,%d) = %f", i, j, distance(x[i], y[i],x[j], y[j]));
		}
	}
	//Xuat khoang cach cua 2 diem ngan nhat
	printf("\nd(min) = %f", min_distance(x, y, n));
}
