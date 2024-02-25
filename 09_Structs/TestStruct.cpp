#include <iostream>
#include <format>
import Employee;

using std::cout;
using std::format;
using std::endl;

int main()
{
	// Create and populate an employee
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'P';
	anEmployee.employeeNumber = 4;
	anEmployee.salary = 40000;

	// Output the values of an employee
	cout << format("Employee: {} {}", anEmployee.firstInitial,
		anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salray: {}", anEmployee.salary) << endl;
	return 0;
}