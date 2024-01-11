#include <iostream>
#include <format>
using namespace std;

int main() {
	float myFloat{ 3.14f };
	// method 3          
	int i3{ static_cast<int>(myFloat) }; 
	cout << format("Casting float 3.14f to int: {}", i3) << endl;
	return 0;
}