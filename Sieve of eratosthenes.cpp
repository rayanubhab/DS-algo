 vector<int> sieveOfEratosthenes(int N)
    {
        
        //Empty array in which all the elements aree unmarked initially
        int prime[N+1] = {0};
        
        for(int i =2;i<=N;i++){
            
            //If an element is unmarked
            
            if(prime[i]==0){
                
                //Mark all its multiples
                
                for(int j=i*i;j<=N;j=j+i){
                    
                    prime[j] = 1;
                }
            }
        }
        
        vector<int> result;
        
        for(int i=2;i<=N;i++){
            
            //Push all the elemets which are unmarked into result vector
            if(prime[i]==0){
                
                result.push_back(i);
            }
        }
        
        return result;
    }
