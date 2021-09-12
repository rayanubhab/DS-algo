vector<string> ans;
void solve(string S,int l,int r){
    if(l==r){
        ans.push_back(S);
        return;
    }
    S.insert(l+1," ");
    solve(S,l+2,r+1);
    S.erase(l+1,1); //Backtracking step
    solve(S,l+1,r);
    
}

    vector<string> permutation(string S){
       
       solve(S,0,S.length()-1);
       return ans;
    }
