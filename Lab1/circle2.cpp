#include<iostream>
using namespace std;

class Circle {
	private:
		double radius;
	public:
		double compute_area() {
			return 3.14*radius*radius;
		}
};

int main() {
	Circle obj;
	obj.radius = 1.5;
	cout << "Area is:" << obj.compute_area();
	return 0;
}