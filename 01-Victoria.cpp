#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int linechar(int x){
	for (int i = 1;i <= x; i++){
		cout << "*";
	}
	return x;
}
int linechar(int y){
	for (int i = 1;i <= y; i++){
		cout << "@";
	}
	return y;
}
int linechar(int z){
	for (int i = 1;i <= z; i++){
		cout << "*";
	}
	return z;
}
int linechar(int a){
	for (int i = 1;i <= a; i++){
		cout << "#";
	}
	return a;
}
int main(){
	int x = 20, y = 20, z = 10, a = 15;
	cout << linechar(x) << endl;
	cout << linechar(y) << endl;
	cout << linechar(z) << endl;
	cout << linechar(a) << endl;
	

	return 0;
}
