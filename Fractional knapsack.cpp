 static bool compare(Item &a,Item &b){
        double i1 = (double)a.value / (double)a.weight;
        double i2 = (double)b.value / (double)b.weight;
        if(i1>i2) return true;
        else return false;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        //sort in decreasing order of value per unit weight
        
        sort(arr,arr+n,compare);
        
        int currweight = 0; //To maintain the current weight of all the items that we picked up
        double maxvalue = 0.0;
        
        for(int i=0;i<n;i++){
//If the current weight plus the item that is being picked now completely fits in the knapsack, completely pickup the item

if(currweight+arr[i].weight<=W){
    currweight+=arr[i].weight;
    maxvalue+=arr[i].value;
}
else{
    double remain=W-currweight;
    maxvalue+=(arr[i].value/(double)arr[i].weight)*remain;
    break;
}
            
        }
        
        return maxvalue;
    }
