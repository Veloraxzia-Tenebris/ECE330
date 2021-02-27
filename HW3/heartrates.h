#include <string>

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
	void setFirstName(std::string temp);
	void setLastName(std::string temp);
	void setMonth(int temp);
	void setDay(int temp);
	void setYear(int temp);
	int setAge();
	int getMaximumHeartRate();
	int getTargetHeartRate();
};