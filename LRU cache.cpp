class LRUCache
{
    public:
    
    int capacity; //max number of elements that can be inserted in cache
    unordered_map<int,int> m; //map storing key value pair
    list<int> l; //In c++ DLL implemented using list(DLL is only going to store key)
    unordered_map<int,list<int>::iterator> address; //for storing the address of node corresponding to given key in list
    
    
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        capacity = cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key)==m.end()) return -1;
        //Before returning the key update this as the most recently used element
        l.erase(address[key]);
        address.erase(key);
        l.push_front(key);
        address[key] = l.begin();
        return m[key];
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
       //If the key is already present then first delete it
       if(m.find(key)!=m.end()){
           l.erase(address[key]);
           address.erase(key);
           m.erase(key);
       }
       
       //If cache is already filled before adding delete the least recently used element
       if(m.size()==capacity){
           int element = l.back();
           l.pop_back();
           address.erase(element);
           m.erase(element);
       }
       
       l.push_front(key);
       address[key] = l.begin();
       m[key] = value;
       
    }
    
};
