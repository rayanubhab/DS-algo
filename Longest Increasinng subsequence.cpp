  int longestSubsequence(int n, int a[])
    {
       vector<int> seq;
       seq.push_back(a[0]);
       for(int i=1;i<n;i++){
           //we can extend the sequence
           if(seq.back()< a[i]) seq.push_back(a[i]);
           //find the smallest element thst is greater or equal to curr element and replace it
           else{
               
               int ind = lower_bound(seq.begin(),seq.end(),a[i]) - seq.begin();
               seq[ind] = a[i];
           }
       }
       
       return seq.size();
    }
