#include <iostream>
#include <string>
#include <heartrates.hpp>
using namespace std;

string HeartRates::getFirstName() {
	return firstName;
}
string HeartRates::getLastName() {
	return lastName;
}
int HeartRates::getMonth() {
	return month;
}
int HeartRates::getDay() {
	return day;
}
int HeartRates::getYear() {
	return year;
}
int HeartRates::getAge() {
	return age;
}
void HeartRates::setFirstName(string temp) {
	firstName = temp;
}
void HeartRates::setLastName(string temp) {
	lastName = temp;
}
void HeartRates::setMonth(int temp) {
	month = temp;
}
void HeartRates::setDay(int temp) {
	day = temp;
}
void HeartRates::setYear(int temp) {
	year = temp;
}
int HeartRates::setAge() {
	int month1, day1, year1;
	cout << "Please enter the current date in the format MM/DD/YYYY" << endl;
	cout << "Month: " << endl;
	cin >> month1;
	cout << "Day: " << endl;
	cin >> day1;
	cout << "Year: " << endl;
	cin >> year1;
	if(month1 > month) {
		if(day1 > day) {
			age = year1 - year;
		} else {
			age = year1 - year + 1;
		}
	} else {
		age = year1 - year + 1;
	}
	return age;
}
int HeartRates::getMaximumHeartRate() {
	return 220 - age;
}
int HeartRates::getTargetHeartRate() {
	return getMaximumHeartRate() * 0.5;
}