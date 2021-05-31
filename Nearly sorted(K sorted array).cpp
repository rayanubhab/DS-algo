#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tc;
	cin>>tc;
	while(tc--){
	    int N,k;
	    cin>>N>>k;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        
	        cin>>arr[i];
	    }
	    
	     priority_queue<int,vector<int>,greater<int>> minh;
	    for(int i=0;i<N;i++){
	        minh.push(arr[i]);
	        
	        if(minh.size()>k){
	            cout<<minh.top()<<" ";
	            minh.pop();}
	        
	    }
	    
	     while(!minh.empty()){
	       
	       cout<<minh.top()<<" ";
	       minh.pop();
	   }
	    
	    cout<<endl;
	    
	}
	
	
	
	return 0;
}
