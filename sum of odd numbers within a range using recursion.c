#include<stdio.h>
int sumOfOdd(int start,int end);

int main(){
	
	int start,end;
	printf("Enter lower limit");
	scanf("%d", &start);
	printf("Enter upper limit");
	scanf("%d",&end);
	printf("sum of odd numbers between %d to %d = %d\n",start,end,sumOfOdd(start,end));
	return 0;
}

int sumOfOdd(int start,int end){
	if(start>end){
		return 0;
	}
	else if(start%2==0){
		return(sumOfOdd(start+1,end));
	}
	else
	    return(start + sumOfOdd(start+1,end));
	
}
