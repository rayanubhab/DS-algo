
//Combination sum - I
 void solve(int idx,int target,vector<int> curr,vector<vector<int>> &ans,vector<int> &candidates){
        
        if(idx==candidates.size()){
            if(target==0) ans.push_back(curr);
            return;
        }
        
        if(candidates[idx]<=target){
            curr.push_back(candidates[idx]);
            solve(idx,target-candidates[idx],curr,ans,candidates);
            curr.pop_back();
            solve(idx+1,target,curr,ans,candidates);
        }
        else  solve(idx+1,target,curr,ans,candidates);
    }
    

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> curr;
        solve(0,target,curr,ans,candidates);
        return ans;
        
    }
    
    
    
    
    
    //Combination sum - ||
    
    //Normal approach(Not optimised)
    
    set<vector<int>> s;
    void solve(int idx,int target,vector<int> &candidates,vector<int> &curr){
        
        if(idx==candidates.size()){
            if(target==0){
                vector<int> v(curr);
                sort(v.begin(),v.end());
                s.insert(v);
            }
            return;
        }
        
        if(candidates[idx]<=target){
            curr.push_back(candidates[idx]);
            solve(idx+1,target-candidates[idx],candidates,curr);
            curr.pop_back();
            solve(idx+1,target,candidates,curr);
        }
        
        else   solve(idx+1,target,candidates,curr);
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> curr;
        solve(0,target,candidates,curr);
        for(auto x : s) ans.push_back(x);
        return ans;
        
    }
    
    
    
    
    
    
    
    
    
    
    //Combination sum - II
    
    
    
    
    
