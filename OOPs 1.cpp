/*Write a program to create five objects namely 1,2,3,4 and 5 such that the object is 
created with output message that object 1 is created then 2 till 5. Then during
the destruction make sure that the objects are destroyed in the reverse order with
an appropriate message*/


#include<iostream>

using namespace std;

int count = 0;

class Object{
	
	public:
		
		Object(){
			count++;
			cout<<"\n object "<<count<<" is created\n";
		}
		
		~Object(){
			
			
			cout<<"\n object "<<count<<" is destroyed\n";
			count--;
		}
	
};

int main(){
	Object a1,a2,a3,a4,a5;
	cout<<endl;
	return 0;
}
