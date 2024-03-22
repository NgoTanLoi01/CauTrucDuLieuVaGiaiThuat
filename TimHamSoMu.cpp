#include <stdio.h>

int exp(int a, int n){
	int p = 1;
	for(int i=1; i<=n; i++)
		p = p*a;
	return p;
}

int main(){
	int a, n, p;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	printf("%d^%d = %d", a, n, exp(a,n));
}
