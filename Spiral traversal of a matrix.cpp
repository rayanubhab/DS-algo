  //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
     
//We can have 4 possible directions for traversal 
//We will keep on reducing the array as we traverse a row or column by marking the boundaries 
   //of the untraversed array using some variables
   
   int top = 0; //Marks the top most row of untraversed array
   int down = r-1; //Marks the Bottom most row
   int left = 0; //Left most column
   int right = c-1; //Right most column
    
/*direction is used as a flag , it exactly points out what is the next move we need to perform.
As the output format is :
1)Left to right next from there(if direction == 0)
2)Top to bottom next from there(if direction == 1)
3)Right to left next from there(if direction == 2)
4)Bottom to top(if direction == 3)
and this above printing format should repeat in the same order till all left , right ,top , bottom index are equal.
At a particular iteration what we need to print from the array is decided by the help of Direction*/        
   int direction = 0;
   
   vector<int> a;
   
   // As long as the entire matrix i.e all the elements are not traversed
   while(left<=right && top <= down) {
       
//First traverse the top most row from left to right       
if(direction == 0) {
for(int i = left;i<=right;i++) {
a.push_back(matrix[top][i]);
}
//Set new top 
top++;
}

//Traverse the top right most column from top to bottom
else if(direction == 1) {
for(int i = top; i<=down;i++) {
a.push_back(matrix[i][right]);
}
right--;
}

//Traverse the bottom most row from right to left
else if(direction == 2) {
for(int i = right ; i>=left;i--) {
a.push_back(matrix[down][i]);
}
down--;
}

//TRaverse the left most column from bottom to top
else if(direction == 3) {
for(int i = down; i>=top;i--) {
a.push_back(matrix[i][left]);
}
left++;
}

direction = (direction+1)%4;
}

return a;

    }
