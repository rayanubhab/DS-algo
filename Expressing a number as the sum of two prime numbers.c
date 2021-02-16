#include<stdio.h>

int checkPrime(int x){
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
		
		          
		          return 0;}
	}
	
	return 1;
	
}

//Returns the next prime number after i
int nextPrime(int x){
	
	do{
		x++;
	}while(!checkPrime(x));
	
	return x;
}


int main(){
	int n,i;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=2;i<=(n-i);i=nextPrime(i)){
		
		if(checkPrime(n-i)){
			printf(" %d + %d = %d \n",i,n-i,n);
		}
		 
	}
	
	
	return 0;
}
