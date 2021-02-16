#include <stdio.h>


int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
	
	int tc,i,t;
	scanf("%d", &tc);
	
	for (t = 0; t < tc; ++t) {
	    int n, result = 0;
	    scanf("%d", &n);
	    
	    int *arr = malloc(sizeof(int) * n);
	    int *lmax = malloc(sizeof(int) * n);
	    int *rmax = malloc(sizeof(int) * n);
	    
	    for (i = 0; i < n; ++i) {
	        scanf("%d", &arr[i]);
	    }
	    
	    lmax[0] = arr[0];
	    rmax[n - 1] = arr[n - 1];
	    
	    for (i = 1; i < n; ++i) {
	        lmax[i] = max(arr[i], lmax[i - 1]);
	    }
	    
	    for (i = n - 2; i >= 0; --i) {
	        rmax[i] = max(arr[i], rmax[i + 1]);
	    }
	    
	    for (i = 0; i < n; ++i) {
	        int minTower = min(lmax[i], rmax[i]);
	        int waterHeight = minTower - arr[i];
	        result += waterHeight;
	    }
	    
	    printf("%d\n", result);
	    
	    free(arr);
	    free(lmax);
	    free(rmax);
	}
	
	return 0;
}
