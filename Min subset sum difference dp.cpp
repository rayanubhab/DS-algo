	vector<int> isSubsetPoss(int arr[], int n, int sum) {
	bool t[n + 1][sum + 1]; // DP - matrix
	// initialization
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0)
				t[i][j] = false;
			if (j == 0)
				t[i][j] = true;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			else
				t[i][j] = t[i - 1][j];
		}
	}

	vector<int> v; 
	
//Checks the last row till half of range for all the subsets which can be formed from the elements in the array and thus exluding the irrevelant values in range
	for (int j = 0; j <= sum/2; j++)
		if (t[n][j] == true)
			v.push_back(j);

	return v;
}
	
	
	int minDiffernce(int arr[], int n) 
	{ 
	    int range = 0;
	for (int i = 0; i < n; i++)
		range += arr[i];

	vector<int> v = isSubsetPoss(arr, n, range);
	int mn = INT_MAX;
	for (int i = 0; i < v.size(); i++)
		mn = min(mn,(range - 2 * v[i]));

	return mn;
	} 
