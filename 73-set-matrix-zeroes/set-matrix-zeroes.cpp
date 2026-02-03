class Solution {
public:
     // Function to set entire row and column to 0 if an element in the matrix is 0
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>x,y;

        // Get number of rows
        int m = matrix.size();
        // Get number of columns
        int n = matrix[0].size();

        // Traverse each cell of the matrix
        for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
                // If current cell is zero
                if (matrix[i][j] == 0) {
                    x.push_back(i);
                    y.push_back(j);
                }  
            }
        }
        for (int i = 0; i < x.size(); i++){
            int index=x[i];
            for(int j=0;j<n;j++){
                matrix[index][j]=0;
            }
        }
        for (int i = 0; i < y.size(); i++){
            int index=y[i];
            for(int j=0;j<m;j++){
                matrix[j][index]=0;
            }
        } 
    }
};