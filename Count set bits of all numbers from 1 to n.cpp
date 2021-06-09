 //Function to find largest power of 2 which is less than or equal to n
    
    int largestPowerof2inrange(int n){
        int x = 0;
        while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n==0) return 0;
        int x = largestPowerof2inrange(n);
        
        int bitsbefore2tothepowerx = x << (x-1);
        int msbfrom2tothepowerxton = n - (1<<x) + 1;
        int rest = n - (1<<x);
        int ans = bitsbefore2tothepowerx + msbfrom2tothepowerxton + countSetBits(rest);
        return ans;
    }
