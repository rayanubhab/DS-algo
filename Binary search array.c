#include<stdio.h>

void binary(){
	//For binary search the array shoud be sorted
   int a[6]={4,8,18,28,31,42};
   int left=0;
   int right=5;
   int mid,x;
   printf("Enter element to find from array\n");
   scanf("%d",&x);
   
   while(left<=right){
   mid=(left+right)/2;
   if(a[mid]==x){
   	
    printf("Element found at index %d\n",mid);
    break;
		
	}
	
	else if(a[mid]<x){
		left = (mid+1);
	}
	else{
		right = (mid-1);
	}
}
    if(left>right){
    	
    	printf("Element not found\n");
	}
        
        
        
   

}


int main(){
	binary();
	return 0;
}
