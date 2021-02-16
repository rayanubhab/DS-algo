#include<stdio.h>

void search(){
	int x,i;
	int a[8]={12,34,11,6,4,8,19,20};
	printf("Enter the number to find from array\n");
	scanf("%d",&x);
	for(i=0;i<8;i++){
		if(x==a[i]){
			printf("Element found at index %d\n",i);
			break;
		}
	}
	if(i==8){
		printf("Element not found");
	}
	
}

int main(){
	
	search();
	return 0;
}
