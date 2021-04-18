 string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> m;
        
        //step 1 : Store the frequency of all the strings in a map
        
        for(int i=0;i<n;i++){
            
            m[arr[i]]++;
        }
        
    //step 2 : Find the string with 2nd highest frequency and return it
    
    //Initialising the highest and second highest frequency
    
    int first_max = INT_MIN,sec_max = INT_MIN;
    
    string res1stmax, res2ndmax;
    
    //Iterate over the map
    
    for(auto x : m){
        
        int freq = x.second;
        
    //If current freq is greater than first_max then update both first_max and sec_max
    
    if(freq>first_max){
        
        sec_max = first_max;
        first_max = freq;
        
        res2ndmax = res1stmax;
        res1stmax = x.first;
        
    }
    //If current frequency lies between first_max & sec_max then only update sec_max
    else if(freq>sec_max && freq<first_max){
        
        sec_max = freq;
        res2ndmax = x.first;
    }
    
    
    }
    return res2ndmax;
    }
