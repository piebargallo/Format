#include <string>
#include <iostream>
#include <format>

using namespace std;

int main()
{
	string myString{ "Hello, World" };
	cout << format("The value of myString is {}", myString) << endl;
	cout << format("The first letter is {}", myString[0]) << endl;
	return 0;
}