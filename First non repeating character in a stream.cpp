	string FirstNonRepeating(string A){
		   
		   int count[26] = {0};
		   queue<char> q;
		   string ans = "";
		   
		   for(int i=0;i<A.length();i++){
		       
		       //Increment count of the character
		       count[A[i]-'a']++;
		       q.push(A[i]);
		       
		       while(!q.empty()){
		           
		           if(count[q.front()-'a']>1) q.pop(); //repeating character so pop it
		           else{
		               //non repeating, append in ans
		               ans+=q.front();
		               break;
		           }
		       }
		       if(q.empty()) ans+='#'; //no repeating character for the current stream , append #
		       
		   }
		   
		   return ans;
		}
