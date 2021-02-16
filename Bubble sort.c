#include<stdio.h>

int main(){
	int a[9]={32,7,6,14,8,12,1,80,2};
	int temp;
	int k,i,j;
	for(i=0;i<8;i++){
		//Bubble sort is slow time complexity being O(n^2)
		//In bubble sort 2 adjcant elements are swapped
		for(j=0;j<(9-i-1);j++){
			
			//Check condition
			if(a[j]>a[j+1]){
				
				//replace j and j+1
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
			}
			
		}
	}
	    for(k=0;k<=8;k++){
	    	printf(" %d ",a[k]);
		}
	
	
	return 0;
}
