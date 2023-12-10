#include <iostream>
#include <format>
using namespace std;

void myFunction(int i, char c);

int main() {
	myFunction(4, 'c');
	return 0;
}

void myFunction(int i, char c) {
	cout << format("The value of i is {}", i) << endl;
	cout << format("The value of c is {}", c) << endl;
}