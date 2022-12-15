class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size = matrix.size() , col_size = matrix[0].size();
        int col_0 = 1;

        // linearly travsesing matrix and
        for(int row_no = 0 ; row_no < row_size ; row_no++){
            // phele row col ka 0 hai 
            if(matrix[row_no][0] == 0 ) col_0 = 0;
            for(int col_no = 1 ; col_no  <  col_size ; col_no++) {
                if(matrix[row_no][col_no] == 0 )
                    matrix[row_no][0] = matrix[0][col_no] = 0;
            }
        }

        for(int row_no = row_size - 1; row_no >=0 ;row_no--){
            for(int col_no = col_size - 1  ; col_no >=1 ; col_no--){
                if(matrix[row_no][0] == 0 || matrix[0][col_no] == 0)
                    matrix[row_no][col_no] = 0;                
            }
            if(col_0 == 0 ) matrix[row_no][0] = 0;
        }

    }
};
// TC- (2(N*M))
//      SC-O(1)
