#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <string>
#include "employee.h"
using namespace std;

class HourlyEmployee : public Employee {
	public:
		HourlyEmployee(long = 0, const string & = "" , const string & = "", const string & = "", int = 0, float = 0, float = 0, float = 0);
		void setHours(const float);
		void setRate(const float);
		void setOvertime(const float);
		float getHours() const;
		float getRate() const;
		float getOvertime() const;
		float salaryCalc();
		void printEmployee();
	private:
		float hoursWorked;
		float hourlyRate;
		int overtimeHours;
};
#endif