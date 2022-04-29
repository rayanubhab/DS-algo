   int check(int val1,int val2){
        if(val1<val2) return -1;
        else if(val1>val2) return 1;
        else return 0;
    }
    
    int compareVersion(string s1, string s2) {
        
        int i = 0, j = 0, n = s1.length(), m = s2.length(),val1 = 0,val2 = 0;
       
        while(i<n && j<m){
            // cout << val1 << " " << val2 << endl;
            if(s1[i]=='.' && s2[j]=='.'){
                 
                int res = check(val1,val2);
                if(res==0){
                    val1 = 0;
                    val2 = 0;
                    i++;
                    j++;
                }
                else return res;
            }
            else if(s1[i]=='.'){ 
                val2 = val2*10 + (s2[j]-'0'); 
                j++; 
            }
            else if(s2[j]=='.') { 
               val1 = val1*10 + (s1[i]-'0'); 
                i++; 
            }
            else{
               val1 = val1*10 + (s1[i]-'0');
               val2 = val2*10 + (s2[j]-'0');
                i++;
                j++;
            }
            
        }
        while(j<m){
            if(s2[j]=='.'){
                int x = check(val1,val2);
                if(x==0){
                    val1 = 0;
                    val2 = 0;
                }
                else return x;
            }
            else {
                 val2 = val2*10 + s2[j]-'0';
            }
            j++;
            
        }
        
         while(i<n){
            if(s1[i]=='.'){
                int y = check(val1,val2);
                if(y==0){
                    val1 = 0;
                    val2 = 0;
                    // i++;
                }
                else return y;
            }
             else {
                 val1 = val1*10 + s1[i]-'0'; 
             }
             i++;
        }
        
        return check(val1,val2);
        
    }
