int MinEle;
int top = 0;

void push(stack<int>& s, int a){
	
//Initially the stack is empty so push the element into the stack and that element will also be min element initially

    if(s.size()==0){
        
        s.push(a);
        MinEle = a;
        top++;
    }
    
    else{
        
        if(a>=MinEle){
            
            s.push(a);
            top++;
        }
        
        else if(a<MinEle){
            
//2*a-MinEle will be basically acting as a flag
            s.push(2*a-MinEle);
            MinEle = a;
            top++;
        }
        
    }
    
}

bool isFull(stack<int>& s,int n){
	
	if(top<=n) return 0;
	
	else return 1;
	
}

bool isEmpty(stack<int>& s){
	
	if(s.size() == 0) return 1;
    return 0;
}

int pop(stack<int>& s){
	
		if(s.size() == 0){
	        
	   return -1;}
	   
	   else{
	       
	       if(s.top()>=MinEle){ 
	           
	           int a = s.top();
	           s.pop();
	           top--;
	           return a;
	           
	       }
	       
	       else if(s.top()<MinEle){
	           
	           MinEle = 2*MinEle - s.top();
	           s.pop();
	           top--;
	           return MinEle;
	       }
	       
	   }
	
}

int getMin(stack<int>& s){
	
	if(s.size() == 0){
	        
	   return -1;}
	   
	 return MinEle;  
}
