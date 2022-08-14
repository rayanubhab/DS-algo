#include <iostream>
using namespace std;

class A{
    public:
    int _a;
};

class B : virtual public A{
  
  public:
  int _b;
  
};

class C: virtual public A{
    public:
    int _c;
};

class D: public B,public C{
  public:
  int _d;
};

int main() {
    D d;
    d._a = 10;
    return 0;
}

   
//     A
//   /   \
//  B     C
//   \   / 
//     D 

// A->_a

// B->_b,_a

// C->_c,_a

// D->_b,_a,_c,_a,_d

// Diamond problem-> In class D _a is inherited two times. So when we try to access _a the compiler will get
// confused which _a is to be accessed. This is an ambuiguity problem and compiler will give error.
// (NOTE: There is no problem in accessing the other variables)

// Solution: Virtual inheritance
// (Virtual inheritance is a C++ technique that ensures only one copy of a base class's member variables are inherited by grandchild derived classes.
// )
