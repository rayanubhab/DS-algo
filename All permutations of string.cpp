	void permute(string S, int l,int r){
	    
	    if(l==r){
	        ans.push_back(S);
	       return; }
	    
	    for(int i=l;i<=r;i++){
	        
	        swap(S[l],S[i]);
	        permute(S,l+1,r);
	        swap(S[i],S[l]);
	    }
	    
	}
	
		vector<string>find_permutation(string S)
		{
		    
		    permute(S,0,S.length()-1);
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
		
		//time complexity O(n*n!)
