#include <iostream>
using namespace std;
struct A { };
class B : private A {
   friend class D;
   friend class F;
};
A global_A;
B global_B;
struct C {
   virtual A* f() {
      cout << "A* C::f()" << endl;
      return &global_A;
   }
};
struct D : C {
   B* f() {
      cout << "B* D::f()" << endl;
      return &global_B;
   }
};
struct E;
struct F : C {
//   Error:
//   E is incomplete
//   E* f();
};
struct G : C {
//   Error:
//   A is an inaccessible base class of B
//   B* f();
};
int main() {
   D d;
   C* cp = &d;
   D* dp = &d;
   A* ap = cp->f();
   B* bp = dp->f();
};
