long long int floorSqrt(long long int x) 
{
   long long int low = 0,high = x,ans = 0;
   while(low<=high){
       long long int mid = low + (high-low)/2;
       if(mid*mid <=x){
           ans = mid;
           low = mid+1;
       }
       
       else high = mid-1;
   }
   return ans;
}
