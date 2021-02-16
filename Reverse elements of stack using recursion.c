#include <stdio.h>

#define N 5

int stack[N];
int top=-1;
void push(int x);
int isfull();
int isempty();
int pop();
void display();
void reverse();
void insertatbottom(int element);

int main(){
	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	printf("Elements of the stack initially :\n");
	display();
	reverse();
	printf("Elements of the stack after reversing using recursion:\n");
	display();
	return 0;
}

void reverse(){
	if(isempty()){
		
		return;
	}
	else{
		int temp=pop();
		reverse();
		//All elements are popped out until stack is empty
		
		insertatbottom(temp);
	}
}

void insertatbottom(int element){
	
	//If stack is empty push the element directly
	if(isempty()){
		
		push(element);
		return;
	}
	else{
		//Pop out elements from the stack
		int topelem=pop();
		
		//Function is called recursively again
		insertatbottom(element);
		
		//Push all popped out elements in stack
		push(topelem);
	}
}

int pop(){
	int item;
	if(isempty()){
		printf("Underflow condition\n");
	}
	else{
		item=stack[top];
		top--;
		return item;
	}
}

void push(int x){
	
	if(isfull()){
		
		printf("Stack is full cannot be inserted\n");
	}
	
	else{
		top++;
		stack[top]=x;
	}
}

int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isfull(){
	if(top==N-1){
		return 1;
	}
	else{
		return 0;
	}
}

void display(){ int i;
for(i=top;i>=0;i--){
	printf("%d\n",stack[i]);
}
}
