#include <iostream>
using namespace std;
struct A {
   virtual void f() { cout << "Class A" << endl; }
};
struct B: A {
   void f(int) { cout << "Class B" << endl; }
};
struct C: B {
   void f() { cout << "Class C" << endl; }
};
int main() {
   B b; C c;
   A* pa1 = &b;
   A* pa2 = &c;
//   b.f();
   pa1->f();
   pa2->f();
}
