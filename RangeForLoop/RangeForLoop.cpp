#include <iostream>
#include <array>
#include <format>

using namespace std;

int main() {
	// The range-based for loop with initializer (C++20)
	for (array arr{ 1, 2, 3, 4 }; int i : arr) { 
		cout << format(" {}", i);
	}
	return 0;
}