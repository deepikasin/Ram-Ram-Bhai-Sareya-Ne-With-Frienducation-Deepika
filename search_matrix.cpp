bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=0;
        int s=0;
        int e=matrix.size() * matrix[0].size() -1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(matrix[mid/( matrix[0].size() )] [mid%( matrix[0].size() )] == target ){
                ans=1;
                break;
            }
            else if( matrix[mid/( matrix[0].size () )] [mid%( matrix[0].size () )]> target ){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }