#include <iostream>
#include <format>
using namespace std;

int addNumbers(int x, int y);

int main() {
    cout << format("Sum of x and y is: {}", addNumbers(2, 2)) << endl;
    return 0;
}

int addNumbers(int x, int y) {
    int z{ 0 };
    z = x + y;
    return z;
}

