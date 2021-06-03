//Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      int l = 2*i+1;
      int r = 2*i+2;
      int largest;
      
      //If current node has left child which is greater than current node update largest 
      
      if(l<n && arr[l]>arr[i]) largest = l;
      else largest = i;
      if(r<n && arr[r]>arr[largest]) largest = r;
      if(largest!=i) swap(arr[i],arr[largest]);{ //If current node is not largest swap the current node with the max child
      heapify(arr,n,largest); //Call recursively again
  }
    }

    
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
       //Leaf nodes will always follow heap property we need to only take care of the internal nodes
       //We will start from last noon leaf node whose index is n/2 -1 and then move up(bottom up)
       //If we can heapify the non leaf nodes then the entire thing will be a heap
       //We can heapify the element at index i only if left and right subtrees are also heap thats why we move from bottom
       
       for(int i=n/2-1;i>=0;i--){
           heapify(arr,n,i);
       }
       
    }

    
    
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        
        // Build max heap(rearranging the array)
        buildHeap(arr,n);
    //extract the elements of the heap one by one and swap with the last element
    //At each iteration we will be extracting the root of heap
    for(int i = n-1;i>0;i--){
        
        swap(arr[0],arr[i]);
        heapify(arr,i,0);//Max heapify the root element with heapsize = i
    }
    
    //NOTE- Heap size is reduced by one and continue the process until only 1 element is left
    }
