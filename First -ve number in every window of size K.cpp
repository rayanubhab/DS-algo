vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
            
        list<long long> l;//Queue or list anything can be used
        long long int i=0;
        long long int j=0;
        vector<long long> v;
        while(j<N){
            if(A[j]<0) l.push_back(A[j]);//If number is -ve then it might be useful for us so we push it 
            if(j-i+1<K) j++;//Move j pointer forward until window size is not attained
            else if(j-i+1==K){
                if(l.empty()) {v.push_back(0);}//No -ve number present in this window so we push 0
                else{
                    v.push_back(l.front());//first -ve number of  the window is present at the front the of the list
                    if(A[i]==l.front()) l.pop_front();//Before moving forward to the next window remove the number which won't be present in the next window
                }
                //Moving both pointers forward
                i++;
                j++;
            }
        }
       return v;
                                                 
 }
