#include<iostream>

using namespace std;

//Function to check whether we can go to a particular position

bool isSafe(int **arr,int x,int y,int n){
	
	if(x<n && y<n && arr[x][y]==1){
		return true;
	}
	
	return false;
}

bool ratinMaze(int **arr,int x,int y,int n,int **solArr){
	
	//Base case i.e the rat reaches the end after following the path
	if(x==(n-1)&&y==(n-1)){
		solArr[x][y]=1;
		return true;
	}
	
	//If we can go to a position
	if(isSafe(arr,x,y,n)){
		solArr[x][y]=1;
		
		
		//Recursively keep moving
		if (ratinMaze(arr,x+1,y,n,solArr)){
			return true;
		}
		
		if (ratinMaze(arr,x,y+1,n,solArr)){
			return true;
		}
		//The path is wrong so we move to the initial position(backtracking) and return false
		solArr[x][y]=0;
		return false;
	}
	
	//If x y is not safe
	return false;
		
		
	
}


int main(){
	
	int n;
	cin>>n;
	//Dynamically allocating 2 D array
	
	int **arr;
	arr=new int* [n];
	for(int row=0;row<n;row++){
		arr[row]=new int[n];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cin>>arr[i][j];
		}
	}
	
	int **solArr;
	solArr=new int* [n];
	for(int i=0;i<n;i++){
		solArr[i]=new int[n];
		for(int j=0;j<n;j++){
			solArr[i][j]=0;
		}
	}
	cout<<"The required output is :"<<endl;
	if(ratinMaze(arr,0,0,n,solArr)){
		
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<solArr[i][j]<<" ";
		}
		cout<<endl;
	}
		
	}
	
	
	return 0;
}
