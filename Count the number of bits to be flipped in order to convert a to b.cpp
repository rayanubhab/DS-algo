 int setBits(int N) {
        
        int count = 0;
        while(N){
         count++;
         N= N&(N-1);
        }
       return count; 
    }
    
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int x = a^b;
        return setBits(x);
        
    }
