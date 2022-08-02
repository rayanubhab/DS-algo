 void solve(int a[],int N,string mapping[],string &output,vector<string> &ans,int idx){
        
        //Base case
        if(idx==N){
            ans.push_back(output);
            return;
        }
        
        string val = mapping[a[idx]];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(a,N,mapping,output,ans,idx+1);
            output.pop_back(); //Backtrack
        }
    }
    
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        //Create a mapping between each number and the string it represents
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output = "";
        solve(a,N,mapping,output,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
