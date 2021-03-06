#include <iostream>
#include <iomanip>
#include <string>
#include "hourlyemployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial, int dept, int hours, float rate, float overtime) : Employee(id, last, first, initial, dept) {
	setHours(hours);
	setRate(rate);
	setOvertime(overtime);
}
void HourlyEmployee::setHours(const int hours) {
	if(hours >= 0)
		hoursWorked = hours;
	else
		throw invalid_argument("Hours cannot be negative");
}
void HourlyEmployee::setRate(const float rate) {
	if(rate >= 0)
		hourlyRate = rate;
	else
		throw invalid_argument("Rate cannot be negative");
}
void HourlyEmployee::setOvertime(const float overtime) {
	if(overtime >= 0)
		overtimeHours = overtime;
	else
		throw invalid_argument("Overtime cannot be negative");
}
int HourlyEmployee::getHours() const {
	return hoursWorked;
}
float HourlyEmployee::getRate() const {
	return hourlyRate;
}
float HourlyEmployee::getOvertime() const {
	return overtimeHours;
}
float HourlyEmployee::salaryCalc() {
	float temp = 0.0;
	temp += getHours() * getRate();
	temp += getOvertime() * getRate() * 1.5;
	return temp;
}
void HourlyEmployee::printEmployee() {
	Employee::printEmployee();
	cout << "Normal Hours Worked: " << getHours() << endl;
	cout << "Hourly Rate: " << getRate() << endl;
	cout << "Overtime Hours: " << getOvertime() << endl;
	cout << "Total Salary: $" << fixed << setprecision(2) << salaryCalc() << endl;
}