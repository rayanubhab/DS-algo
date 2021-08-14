 long long int count = 0;

void merge(long long arr[],long long s,long long e){
    
        long long mid = s+(e-s)/2;
    
    long long i = s;
    long long j = mid+1;
    long long k = s;
    
    long long temp[100000];
    
    while(i<=mid && j<=e){
        if(arr[i] <=arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            count+= (mid+1-i); //Inversion count
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=e){
        temp[k]  = arr[j];
        k++;
        j++;
    }
    
      for(long long i=s;i<=e;i++){
        arr[i] = temp[i];
    }
}

void mergeSort(long long arr[],long long s,long long e){
    
    if(s>=e) return;
    long long mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
    
}

long long int inversionCount(long long arr[], long long N)
{ 
   
   mergeSort(arr,0,N-1);
   return count;
}
