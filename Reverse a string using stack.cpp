char* reverse(char *S, int len)
{
    stack<char> st;
    
    //Iterate through the string and push the alphabets into the stack
    //*S given as parameter is same as char S[] as array is always passed as a pointer
    
    for(int i = 0;i<len;i++){
        
        st.push(S[i]);
    }
    
    //Loop for popping
    
    for(int i = 0;i<len;i++){
        
        S[i] = st.top();
        st.pop();
    }
    
    return S;
}
