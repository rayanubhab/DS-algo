//Iterative approach

#include<iostream>
#include<string.h>

using namespace std;

bool isPalindrome(char name[]){
	
	int leftIdx = 0;
	int rightIdx = strlen(name)-1;
	
	for(leftIdx=0;leftIdx<rightIdx;leftIdx++){
		
		if(name[leftIdx]!=name[rightIdx]){
			
			return false;
		}
		
		rightIdx--;
	}
	
	return true;
	
	
}

int main(){
	
	bool output = isPalindrome("abba"); 
	cout<<output;
	return 0;
}
