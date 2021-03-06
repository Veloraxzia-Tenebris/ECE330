/* File: test.cpp */
// File to test the basic employee class

#include <iostream>
#include <string>
#include <exception>
#include "employee.h"
#include "employee.cpp"
#include "salariedemployee.h"
#include "salariedemployee.cpp"
#include "hourlyemployee.h"
#include "hourlyemployee.cpp"
using namespace std;

int main() 
{
	SalariedEmployee e1(001, "Jones", "Booker", "T", 22), e2(002, "Hendrix", "Jimi", "NMI", 14);
	HourlyEmployee e3(003, "Morrison", "Jim", "D", 03), e4(004, "Iwork", "Overtime", "XYZ", 42);
	float salary = 100;
	float rate = 20;
	int hours = 10;
	e1.setSalary(salary);
	e2.setSalary(salary);
	e2.setWorked(0.5);
	e3.setHours(hours);
	e3.setRate(rate);
	e4.setHours(hours);
	e4.setRate(rate);
	e4.setOvertime(5);
	cout << endl << "> > > Full-time salary: ";
	e1.printEmployee();
	cout << endl << "> > > Half-time salary: ";
	e2.printEmployee();
	cout << endl << "> > > Hourly worker no overtime: ";
	e3.printEmployee();
	cout << endl << "> > > Hourly worker overtime: ";
	e4.printEmployee();
}