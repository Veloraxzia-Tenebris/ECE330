#include <iostream>

class MyClass {
	private:
		int counter;
	public:
		void Foo() {
			std::cout << "Foo" << std::endl;
		}
		void Foo() const {
			std::cout << "Foo const" << std::endl;
		}
};

int main() {
	MyClass cc;
	MyClass ccc;
	cc.Foo();
	ccc.Foo();
}