vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> wave;
    for(int col = 0 ; col<mCols;col++ ){
        
        if(col&1){
            //odd case -> bottom to top
            for(int i =nRows-1 ; i>=0;  i--){
                wave.push_back(arr[i][col]);
            }
        }
        
        else{
            //even case-> top to bottom
            for(int i = 0 ; i<nRows; i++){
                wave.push_back(arr[i][col]);
             }
        }
        
    }//O(N*M)
    return wave;
}
