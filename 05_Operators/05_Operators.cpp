#include <iostream>
#include <format>
using namespace std;

int main()
{
	int i{ 256 };
	float someFloat{ 256.44 };
	int j{ static_cast<int>(someFloat) };
	// i = i + j;
	i += j;
	cout << format("Result of i + j: {}", i) << endl;
	return 0;
}
