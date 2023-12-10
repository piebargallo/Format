#include <vector>
#include <iostream>
#include <format>

using namespace std;

int main()
{
	// Create a vector of integers
	vector myVector { 11, 22 };  // Using CTAD

	// Add some more integers to the vector using push_back()
	myVector.push_back(33);
	myVector.push_back(44);

	// Access elements
	cout << format("1st element: {}", myVector[0]) << endl;
	cout << format("2nd element: {}", myVector[1]) << endl;
}