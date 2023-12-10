#include <iostream>
#include <array>
#include <format>
using namespace std;

int main() {
    array arr{ 13, 23, 43 };
    auto [a, b, c] = arr;
    cout << format("2nd element = {}", arr[1]) << endl;
    return 0;
}
