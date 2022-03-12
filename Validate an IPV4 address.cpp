    int isValid(string s) {
           
           //number of dots should be three and the string shouldn't contain any other special characters or alphabets
           int dot_count = 0,n=s.length();
           for(int i=0;i<n;i++){
               if(s[i]=='.') dot_count++;
               else{
                   if(!(s[i]>='0' && s[i]<='9')) return 0;
               }
           }
         if(dot_count!=3) return 0;
         
         string ans = "";
         for(int i=0;i<n;i++){
             if(s[i]=='.'){
                 if(ans[0]=='0' && ans.length()>1) return 0; //handling leading zeroes
                 if(!(ans.length()>0 && ans.length()<=3)) return 0;
                 int num = stoi(ans);
                 if(!(num>=0 && num<=255)) return 0;
                 ans="";
             }
             else ans+=s[i];
         }
         
         //checking last number(last octet)
         if(!(ans.length()>0 && ans.length()<=3)) return 0;
         if(ans[0]=='0' && ans.length()>1) return 0; //handling leading zeroes
         int last = stoi(ans);
          if(!(last>=0 && last<=255)) return 0;
          return 1;
        }
