#include<stdio.h>
//An n-digit number is said to be automorphic if the last n digits of its square are the same as the original number. For instance, 5^2 = 25, 6^2 = 36, 25^2 = 625, 76^2 = 5776 and many others.      

int isAutomorphic(int i,int n){
	if(i==0){
		return 1;
	}
	if(i%10==n%10){
		return isAutomorphic(i/10,n/10);
	}
	else {
	
	    return 0;}
}

int main(){
	int i=1,k,n;
	
	printf("The automorphic numbers are: \n");
	while(i<=100){
			k=isAutomorphic(i,i*i);
		if(k==1){
			printf(" %d ",i);
		    
			
		}
		
			
			
	
		  
		  i++;
		
	}
	
	return 0;
}
