#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int linechar(int x){
	for (int i = 1;i <= x; i++){
		cout << "*";
	}
	cout << "\n";
	for (int i = 1;i <= x; i++){
		cout << "@";
	}
	cout << "\n";
	return x;
}
int linechar(int z, int a){
	for (int i = 1;i <= z; i++){
		cout << "*";
	}
	cout << "\n";
	for (int i = 1;i <= a; i++){
		cout << "#";
	}
	return z,a;
}

int main(){
	int x = 20, z = 10, a = 5;
	linechar(x);
	linechar(z,a+=z);
	return 0;
}
