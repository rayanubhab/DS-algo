 int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> m;
        int j = 0,ans = 0;
        for(int i=0;i<s.length();i++){
            
            m[s[i]]++;
            
            //release until string becomes valid again
            while(m[s[i]]!=1){
                m[s[j]]--;
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
   
