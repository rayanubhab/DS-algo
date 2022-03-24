#include <bits/stdc++.h>

using namespace std;

class Animal{
  
  public:
  virtual void speak(){
      cout<<"Speaking"<<endl;
  }
};

class dog : public Animal{
    
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Animal *p;
    dog d;
    p = &d; //parent class pointer pointing to object of derived class
    p->speak();
    return 0;
}

