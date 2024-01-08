vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int colEnding=matrix[0].size();
        int count=0;
        int n=matrix.size()*matrix[0].size();
        int rowEnding=matrix.size();
        int rowStarting=0;
        int colStarting =0;
        while(count<n){
            for(int i=colStarting;count<n && i<colEnding;i++){
            ans.push_back(matrix[rowStarting][i]);
            count++;
        }
        rowStarting++;
        for(int i=rowStarting;count<n && i<rowEnding;i++){
            ans.push_back(matrix[i][colEnding]);
            count++;
        }
        colEnding--;
        for(int i=colEnding-1;count<n && i>=colStarting;i--){
            ans.push_back(matrix[rowEnding][i]);
            count++;
        }
        rowEnding--;
        for(int i=rowEnding-1;count<n && i>=rowStarting;i--){
            ans.push_back(matrix[i][colStarting]);
            count++;
        }
        colStarting++;
        }
        return ans;
    }