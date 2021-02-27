#include <string

class HeartRates {
	private:
	std::string firstName, lastName;
	int month, day, year, age;
	public:
	std::string getFirstName();
	std::string getLastName();
	int getMonth();
	int getDay();
	int getYear();
	int getAge();
	void setFirstName(std::string);
	void setLastName(std::string);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int setAge();
	int getMaximumHeartRate();
	int getTargetHeartRate();
};