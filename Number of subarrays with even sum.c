#include<stdio.h>


int main(){
	int a[6]={1, 2, 2, 3, 4, 1};
    int start,end,i,count=0;
	for(start=0;start<6;start++){
		
		int sum=0;
		for(end=start;end<6;end++){
			//All possible combinations
sum=sum+a[end];
		if(sum%2==0){
			
			count++;
		}}
		
	}
	return count;
	
	
	
	return 0;
}
