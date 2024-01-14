bool searchMatrix (vector<vector<int>>& matrix, int target) {
        bool ans=0;
        int s=0;
        int row = matrix.size();
        int col = matrix[0].size()-1; 
        while(s<row && col>=0){
            if(matrix[s][col] == target){
                ans=1;
                break;
            }
            else if( matrix[s][col] > target ){
                col--;
            }
            else{
                s++;
            }
        }
        return ans;
    }