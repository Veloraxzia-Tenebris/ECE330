#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "employee.h"
using namespace std;

class HourlyEmployee : public Employee {
	public:
		HourlyEmployee(long = 0, const string & = "" , const string & = "", const string & = "", int = 0, int = 0, float = 0, float = 0);
		void setHours(const int);
		void setRate(const float);
		void setOvertime(const float);
		int getHours() const;
		float getRate() const;
		float getOvertime() const;
		float salaryCalc();
		void printEmployee();
	private:
		int hoursWorked;
		float hourlyRate;
		float overtimeHours;
};
#endif