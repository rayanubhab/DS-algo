  //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        
        vector<int> idx(K,0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        
//extract the first element of every array and push it in min heap along with corresponding array number to keep track

for(int i=0;i<K;i++){
      minh.push(make_pair(arr[i][0],i));
}

vector<int> res;

while(minh.size()>0){
pair<int,int> x = minh.top();
minh.pop();
res.push_back(x.first);

//Check if there is element left in the corresponding array
  if(idx[x.second]+1 < K){
//If element is left in the corresponding array push it into the heap     
          minh.push({arr[x.second][idx[x.second]+1] , x.second});
}

//Increase iterator to Next index of corresponding array
 idx[x.second] += 1;   
    
}

return res;
    }
