

#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string name){
	
	int leftIdx = 0;
	int rightIdx = name.length()-1;
	
	for(leftIdx=0;leftIdx<rightIdx;leftIdx++){
		
		if(name[leftIdx]!=name[rightIdx]){
			
			return false;
		}
		
		rightIdx--;
	}
	
	return true;
	
	
}


int computeNum(string name){
	
	int count=0;
	int flag=0;
	
while(name.length()>0){
	
	//If string becomes palindrome then break
	if(isPalindrome(name)){
		
		
		flag=1;
		break;
	}
	
	else{
		
		count++;
		//Delete last element of the string
		
		name.pop_back()
			}
		}
		
		if(flag){
			
			
			
			
			return count;
		}
		
		
}


int main(){
	
	int output= computeNum("d");
	
	cout<<output;
	return 0;
}
