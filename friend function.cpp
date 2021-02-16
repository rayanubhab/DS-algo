//friend function

/* 1.can access any member of a class by creating an object of that class to which it is a friend
   2.Mo caller object i.e friend function can be called without an abject
   3.declared inside  class
   4.defined outside  class
   */


#include<iostream>

using namespace std;

class A{
	
	private:
		int a,b;
		
		public:
			void input(){
				cout<<"Enter two values"<<endl;
				cin>>a>>b;
			}
			
			//friend function declaration
			
			friend void add(A obj);
};

void add(A obj){
	
	int c;
	c=obj.a+obj.b;
	cout<<"The sum is "<<c<<endl;
}

int main(){
	
	A obj1;
	obj1.input();
	//friend function called without an object
	add(obj1);
	
	return 0;
}
