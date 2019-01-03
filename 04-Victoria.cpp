#include <iostream>
using namespace std;
int main(){
	char input1, input2;
	cout << "Enter 2 letters: ";
	cin >> input1 >> input2;
	
	for(char i = input1; i<=input2; i++){
		cout << i;
	}
}
