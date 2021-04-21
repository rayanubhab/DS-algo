//First and last occurence of an element x using binary search O(logn) time complexity

int firstoccurence(int a[],int n, int x){
	
	int low = 0;
	int high = n-1;
	int result = -1;
	
	while(low<=high){
		
		int mid = (low + high)/2;
		
		if(a[mid]>x){
			
			high = (mid-1);
		}
		
		else if(a[mid]<x){
			low = (mid+1);
		}
		
//when element has been found donot stop searching look for smaller indices of the element towards left
		else{
			result = mid;
			high = mid-1;
		}
	}
	
//when element is not found then result won't be updated so the initial value of result will be returned i.e -1
	return result;
	
}





//Last occurence


int lastoccurence(int a[],int n, int x){
	
	int low = 0;
	int high = n-1;
	int result = -1;
	
	while(low<=high){
		
		int mid = (low + high)/2;
		
		if(a[mid]>x){
			
			high = (mid-1);
		}
		
		else if(a[mid]<x){
			low = (mid+1);
		}
		
//when element has been found donot stop searching look for last occurence of the element towards right
		else{
			result = mid;
			low = mid+1;
		}
	}
	
//when element is not found then result won't be updated so the initial value of result will be returned i.e -1
	return result;
	
}





