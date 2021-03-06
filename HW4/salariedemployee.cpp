#include <iostream>
#include <iomanip>
#include <string>
#include "salariedemployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial, int dept, float salary, float worked) : Employee(id, last, first, initial, dept) {
	setSalary(salary);
	setWorked(worked);
}
void SalariedEmployee::setSalary(const float salary) {
	monthlySalary = salary;
}
void SalariedEmployee::setWorked(const float worked) {
	fractionWorked = worked;
}
float SalariedEmployee::getSalary() const {
	return monthlySalary;
}
float SalariedEmployee::getWorked() const {
	return fractionWorked;
}
float SalariedEmployee::salaryCalc() {
	float temp = 0.0;
	temp += getWorked() * getSalary();
	return temp;
}
void SalariedEmployee::printEmployee() {
	Employee::printEmployee();
	cout << resetiosflags(ios::showbase) << fixed << setprecision(2);
	cout << "Fraction of Time Worked: " << getWorked() << endl;
	cout << "Monthly Salary: $" << getSalary() << endl;
	cout << "Salary: $" << salaryCalc() << endl;
	cout << resetiosflags(ios::showbase);
}