
int minimumSwaps(vector<int> arr) {

int count = 0,n = arr.size();
vector<int> temp;
temp = arr;
sort(temp.begin(),temp.end());
unordered_map<int,int> m; //map to keep track of the indices of elements
for(int i=0;i<n;i++) m[arr[i]] = i;

for(int i=0;i<n;i++){
    //There's mismatch so we will perform one operation of swap here i.e increment count
    if(temp[i]!=arr[i]){
        count++;
        int init = arr[i];
        int idx = m[temp[i]];
        swap(arr[idx],arr[i]); //Perform swap
        //update the indices in map because the updated indices might be of use in future
        m[init] = m[temp[i]];
        m[temp[i]] = i;
    }
    
}

return count;
}

