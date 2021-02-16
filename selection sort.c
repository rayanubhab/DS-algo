#include<stdio.h>

int main(){
	int a[9]={32,7,6,14,8,12,1,80,2};
	
	//In selection sort first the smallest element is chosen and it is placed at 0th index ,
	//Then the next smallest element is selected and placed at 1st index and so on
	//0(n^2)
	int i,j,minindex,temp,k;
	
	for(i=0;i<8;i++){
		//Initialise the min index with i that is minindex is zero initially
		minindex=i;
		for(j=i+1;j<9;j++){
			//Check whether the element at jth index is smaller than the element at minindex
			if(a[j]<a[minindex]){
				minindex = j;
			}
		}
			//Replace the element at minindex
			temp=a[minindex];
			a[minindex]=a[i];
			a[i]=temp;
	}
	        for(k=0;k<=8;k++){
	    	printf(" %d ",a[k]);
		}
	
	
	    return 0;
	
	}
