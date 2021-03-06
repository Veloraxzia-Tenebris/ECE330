#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include <string>
#include "employee.h"
using namespace std;

class SalariedEmployee : public Employee {
	public:
		SalariedEmployee(long = 0, const string & = "" , const string & = "", const string & = "", int = 0, float = 0, float = 1);
		void setSalary(const float);
		void setWorked(const float);
		float getSalary() const;
		float getWorked() const;
		float salaryCalc();
		void printEmployee();
	private:
		float monthlySalary;
		float fractionWorked;
};
#endif