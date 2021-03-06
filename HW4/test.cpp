/* File: test.cpp */
// File to test the basic employee class

#include <iostream>
#include <string>
#include "employee.h"
#include "employee.cpp"
//#include "salariedemployee.h"
#include "hourlyemployee.h"
#include "hourlyemployee.cpp"
using namespace std;

int main() 
{
	HourlyEmployee e2(002, "Hendrix", "Jimi", "NMI", 14);
//	e1 (001, "Jones", "Booker", "T", 22),
//	e2 (002, "Hendrix", "Jimi", "NMI ", 14),
//	e3 (003, "Morrison", "Jim", "D", 03);
	
	e2.setHours(10);
	e2.setRate(20);
	e2.setOvertime(5);

//	e1.printEmployee();
	e2.printEmployee();
}