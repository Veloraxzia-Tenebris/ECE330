#include <iostream
#include <string>
#include <heartrates.hpp>
using namespace std;

int main() {
	HeartRates hr;
	string stemp;
	int itemp;
	cout << "Please enter your first name: " << endl;
	cin >> stemp;
	hr.setFirstName(stemp);
	cout << "Please enter your last name: " << endl;
	cin >> stemp;
	hr.setLastName(stemp);
	cout << "Please enter the your date of birth in the format MM/DD/YYYY" << endl;
	cout << "Month: " << endl;
	cin >> itemp;
	hr.setMonth(itemp);
	cout << "Day: " << endl;
	cin >> itemp;
	hr.setDay(itemp);
	cout << "Year: " << endl;
	cin >> itemp;
	hr.setYear(itemp);
	hr.setAge();
	cout << "Name: " << hr.getFirstName() << " " << hr.getLastName() << endl;
	cout << "Date of Birth: " << hr.getMonth() << "/" << hr.getDay() << "/" << hr.getYear() << endl;
	cout << "Age: " << hr.getAge() << endl;
	cout << "Maximum Heart Rate: " << hr.getMaximumHeartRate() << endl;
	cout << "Target Heart Rate: " << hr.getTargetHeartRate() << endl;
	return 0;
}