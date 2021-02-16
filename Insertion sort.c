#include<stdio.h>

int main(){
	int a[9]={32,7,6,14,8,12,1,80,2};
	//In insertion sort the nth element is compared with all the previous elements & placed accordingly
	int i,j,k,temp;
	for(i=1;i<9;i++){
		temp=a[i];
		j=(i-1);
		while(j>=0 && a[j]>temp){
		//Replace
		a[j+1]=a[j];
		j--;
		}
	   a[j+1]=temp;	
		
	}
	
	for(k=0;k<=8;k++){
	    	printf(" %d ",a[k]);
		}
	
	
	    return 0;
	
}
