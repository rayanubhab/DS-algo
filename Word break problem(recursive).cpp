// A : given string to search
// B : vector of available strings

int help(int i,string A,set<string> &B){
    
    //i denotes the index we are standing on
    
    if(i==A.size()) return 1; //Base case we have reached the end so return true
    
    string temp;
    for(int j=i;j<A.size();j++){
      
      temp+=A[j];//keep adding the characters one by one in temp
      
      //check if temp is present in the word dictionary or not
      if(B.find(temp)!=B.end()){
          //check whether I can break the string starting from j+1 till end into segments
          if(help(j+1,A,B)) return 1;
      }
      
    }
   //Finally after exploring all the possibilities return false if its not breakable
   return 0;
}


//Logic: Try searching the word in the dictionary starting from the first letter
//If the word is found in  the dictionary take this and perform the algorithm on the remaing part
int wordBreak(string A, vector<string> &B) {
   set<string> s;
   for(auto a:B){
       s.insert(a);
   }
   return help(0,A,s);
}
