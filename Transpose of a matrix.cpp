 //swapping all the elements of matrix will not bring any change it will remain same so need to swap all
 //Only the elements along main diagonal are swapped
 //loop is started from j=i+1 since diagonal elements(i=j) will remain same so no need to swap them 
 
 
 void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
