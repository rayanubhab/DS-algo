int t[101][101];
int solve(int i,int j,int arr[]){
	
	if(i==j) return 0; //Base case
	
	int min = INT_MAX;
	
	if(t[i][j]!=-1) return t[i][j];
	
	//K basically denotes partitons
	
	for(int K=i;K<j;K++){
		
		//Divide into partitions and find answer for each combination that can be formed 
		
		int temp = solve(i,K,arr) + solve(K+1,j,arr) + arr[i-1]*arr[K]*arr[j];
		
		//We need to take min of all the possible combinations formed
		
		if(temp<min) min = temp;
	}
	return t[i][j]=min;
}

    int matrixMultiplication(int N, int arr[])
    {
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                t[i][j] = -1;
            }
        }
        return solve(1,N-1,arr);
    }
