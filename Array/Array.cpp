#include <iostream>
#include <array>
#include <format>

using namespace std;

int main()
{
	array arr{ 0, 2, 4, 6, 8 };  // Using CTAD
	cout << format("Array size = {}", arr.size()) << endl;
	cout << format("2nd element = {}", arr[1]) << endl;
}
