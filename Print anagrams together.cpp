vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    map<map<char, int>, vector<string>> bmap;
    
    for(string str : string_list){
        
        map<char,int> fmap;
        
         // Counting the frequency of the
        // characters present in a string
        
        for(int i=0;i<str.length();i++){
            fmap[str[i]]++;
        }
//Iterator for iterating through the big map and searching for the frequency map(key)
          auto it = bmap.find(fmap);
     
     //frequency map found in bmap     
          if (it != bmap.end())
        {
            it->second.push_back(str);
        }
        //Corresponding freq map(key) not found in big map
        else
        {     vector<string> temp_my_list;
            temp_my_list.push_back(str);
            bmap.insert({ fmap, temp_my_list });
        }
    }
    
    
    // Stores the result in a vector
    vector<vector<string>> result;
 
    for(auto x: bmap)
    {
        result.push_back(x.second);
    }
       
       return result;   
        
    }
