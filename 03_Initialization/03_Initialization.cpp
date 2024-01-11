// 03_Initialization.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <format>
using namespace std;

int main() {
	
	int i{ };

	// Print to zero 
	cout << format("Zero initialization: {}", i) << endl;

	return 0;
}