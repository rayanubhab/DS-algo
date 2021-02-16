
//Two complex numbers : a + ib , e + if

#include<iostream>

using namespace std;

class Complex{
	
	private:
		
		int real,imag;
		
	public:
	//Parametised constructor used to initialise the values of the instance member variables
	
	//Providing zero which is basically the default value
		Complex(int x=0,int y=0){
			
			real=x;
			imag=y;
		}
		
//Code for operator overloading(Binary)
//This is automatically called when '+' is used in between two Complex objects 
    

       Complex operator +(Complex c){
       	
       	Complex res;
       	res.imag=imag + c.imag;//b + f returns 11 in this case
       	res.real=real + c.real;//a + e returns 9 in this case
       	return res;
	   }
	   
	   void display(){
	   	
	   	cout<< real <<" +i"<<imag<<endl; 
	   }
};

int main(){
	//Two complex numbers c1 and c2 are defined
	Complex c1(3,4), c2(6,7);
	
	Complex c3;
	c3=c1.operator +(c2); // Basically adding the two complex numbers i.e c3 = c1 + c2
	c3.display(); 
	return 0;
}
