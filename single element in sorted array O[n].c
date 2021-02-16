#include<stdio.h>

int main(){
	 //Array should be sorted
	 int A[5]={1,2,2,5,5};
	 int i;
	 for(i=0;i<5;i=i+2){
	 	
	 	if(A[i]!=A[i+1]) {
		 
		 
		      return A[i];
		      break;}
	 	
	 }
	 if(i==4){
	 	return A[4];
	 }
	 
	
	
	
	return 0;
}
