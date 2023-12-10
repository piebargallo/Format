#include <utility>
#include <iostream>
#include <format>

using namespace std;

int main()
{
	pair myPair { 1.2, 5.3 };  // Using CTAD
	cout << format("{} {}", myPair.first, myPair.second) << endl;
	return 0;
}
