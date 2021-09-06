 void findMax(string str,string &max,int k){
        
        if(str>max) max = str;
        if(k==0) return;
        
        for(int i=0;i<str.length()-1;i++){
            for(int j=i+1;j<str.length();j++){
                if(str[j]>str[i]){
                    swap(str[j],str[i]);
                    findMax(str,max,k-1);
                    swap(str[j],str[i]);
                }
            }
        }
    }
    
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       string max;
       max=str;
       findMax(str,max,k);
       return max;
    }
