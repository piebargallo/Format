#include <iostream>
#include <format>

using namespace std;

int main()
{
	
	signed int i{ -6 };
	unsigned int j{ 2U };

	cout << format("{} signed", i) << endl;
	cout << format("{} unsigned", j) << endl;

	return 0;
}
