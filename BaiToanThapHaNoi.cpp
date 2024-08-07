#include<iostream>

using namespace std;

void chuyen(int n, char a, char b){
	cout<<"\nChuyen dia thu " << n << "tu coc " << a << "sang coc " << b;
	
}

void thapHaNoi(int n, char a, char b, char c){
	if(n==1) chuyen(1, a, c);
	else{
		thapHaNoi(n-1, a, c, b);
		chuyen(n, a, c);
		thapHaNoi(n-1, b, a, c);
	}
}

int main(){
	int n;
	char a = 'A', b = 'B', c = 'C';
	cin>>n;
	thapHaNoi(n, a, b, c);
}
