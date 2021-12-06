int remove_duplicate(int a[],int n){
       
       int i=0,j=1;
       while(i<n && j<n){
           if(a[i]!=a[j]){
               i++;
               a[i]=a[j];
               j++;
           }
           else{
               
               j++;
           }
       }
       
       return i+1;
    }
