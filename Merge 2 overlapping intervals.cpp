    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()==0 || intervals.size()==1) return intervals;
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end()); //if we sort the array the intervals that we need to overlap will come adjacently
        vector<int> temp = intervals[0];
        
        
        for(auto it : intervals){
            //check whether they are overlapping
            
            if(it[0]<=temp[1]){
                temp[1] = max(temp[1],it[1]); //Merge the intervals
            }
            //Not overlapping
            else{
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
