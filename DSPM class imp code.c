#include<stdio.h>
int i=5;

void f(){
	i=10;
	printf("%d",i);
}

int main(){
	
	printf("%d\n",i);
	f();
	return 0;
}
