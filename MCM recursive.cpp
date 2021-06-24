int solve(int i,int j,int arr[]){
	
	if(i==j) return 0; //Base case
	
	int min = INT_MAX;
	
	//K basically denotes partitons
	
	for(int K=i;K<j;K++){
		
		//Divide into partitions and find answer for each combination that can be formed 
		
		int temp = solve(i,K,arr) + solve(K+1,j,arr) + arr[i-1]*arr[K]*arr[j];
		
		//We need to take min of all the possible combinations formed
		
		if(temp<min) min = temp;
	}
	return min;
}

int matrixMultiplicationmain(int N, int arr[])
    {
    	//If the size of array is N then there are N-1 matrixes
    	//We will solve for all the matrices from 1 to N-1
        return solve(1,N-1,arr);
    }
