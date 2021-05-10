vector<long long> nextLargerElement(vector<long long> arr, int n){
        
//Main logic:

/*Since stack follows LIFO principle we will iterate from the end of the array. We will push 
all the elements which are towards the right of the current element into our stack. We are going to pop
the elements one by one until the element at top of the stack is greater than the current element.
If we keep popping and the stack becomes empty then that means there is no element which is greater 
than the current element towards the right , we simply return -1*/


    stack <long long> s;
    vector<long long> ans;
    
    for(int i=n-1;i>=0;i--){
        
        if(s.empty())   ans.push_back(-1);
        
          else{  
            while(s.size()>0  and s.top()<=arr[i]){  
            s.pop();
            }
            if(s.empty())   ans.push_back(-1);
            else            ans.push_back(s.top());
            
        
          }
    //After the current element is processed push it into the stack before moving to next iteration
        s.push(arr[i]);
        
    }
    reverse(ans.begin(),ans.end());
    return ans;

        
    }
