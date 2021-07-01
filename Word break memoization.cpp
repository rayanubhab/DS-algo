// A : given string to search
// B : vector of available strings

int t[1001];

int help(int i,string A,vector<string> &B){
    
    //i denotes the index we are standing on
    
    if(i==A.size()) return 1; //Base case we have reached the end so return true
    
    string temp;
    if(t[i]!=-1) return t[i];
    
    for(int j=i;j<A.size();j++){
      
      temp+=A[j];//keep adding the characters one by one in temp
      
      //check if temp is present in the word dictionary or not
     vector<string>:: iterator it;
      it=find(B.begin(),B.end(),temp);
      if(it!=B.end()){
          //check whether I can break the string starting from j+1 till end into segments
          if(help(j+1,A,B)) return t[i]= 1;
      }
      
    }
   //Finally after exploring all the possibilities return false if its not breakable
   return t[i]=0;
}


//Logic: Try searching the word in the dictionary starting from the first letter
//If the word is found in  the dictionary take this and perform the algorithm on the remaing part
int wordBreak(string A, vector<string> &B) {
   memset(t,-1,sizeof t);
   return help(0,A,B);
}
