static bool compare(Job a,Job b){
        if(a.profit>b.profit) return true;
        else return false;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //sort in decreasing order of profit
        sort(arr,arr+n,compare);
        int maxdeadline = arr[0].dead;
        //Find max deadline from the array to construct done array for tracking
        for(int i=1;i<n;i++){
            if(arr[i].dead>maxdeadline) maxdeadline = arr[i].dead;
        }
        
//size taken as maxdeadline+1 in order to consider 1 based indexing
        int done[maxdeadline+1];
        for(int i=0;i<=maxdeadline;i++) done[i]=-1;
        
        int count=0,maxprofit=0;
        
        for(int i=0;i<n;i++){
            //start checking from the back in done array whether slots are empty
            for(int j=arr[i].dead;j>0;j--){
    //If slots are available perform the job,include its profit in maxprofit and also increment count of no. of jobs done
                if(done[j]==-1){
                    done[j]=arr[i].id;
                    count++;
                    maxprofit+=arr[i].profit;
                    break;
                }
                
            }
            
        }
        return {count,maxprofit};
    } 
