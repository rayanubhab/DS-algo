int maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        
        int i = 0, j = 0;
        int sum = 0;
        int ans = INT_MIN;

while (j < N)
{
sum = sum + Arr[j];

if (j - i + 1 < K) j++;  //moving(incrementing) until window of size K is not formed


else if (j - i + 1 == K)
{ //maintaining window size
if(sum>ans) ans=sum; //taking maximum of all sums
sum = sum - Arr[i]; //removing sum of ith element
i++; //moving both pointers forward
j++;
}
}
return ans;
        
        
    }
