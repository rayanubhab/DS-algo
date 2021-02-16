#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
		int tc;
	cin>>tc;
	while(tc--){
	    
	    string s;
	    cin>>s;
	    
	    //Max frequency is set to zero initially
	    int maxfreq=0;
	    unordered_map<char,int> m;
	    
	    //Start iterating over the string for frquency calculation
	    //for all the characters in given string s
	    //c is basically an iterator
	    
	    for(char c : s){
	        
 //For each character we are incrementing the count of that particular char basically calculating frequency
	        m[c]++;
	        
	     if(m[c]>maxfreq)
	        
	        //Update the maximum frequency
	        
	        maxfreq=m[c];
	    }
	    
	    //Check the condition
	    
	    if(2*maxfreq<=s.length()+1)
	          cout<<1<<endl;
	    else
	          cout<<0<<endl;
	                   
	}
	return 0;
}
