int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        int ans=0;
        int sum=0;
        
        for(int i=0; i<k; i++){
            sum =sum+ cardPoints[i];
        }
        ans = sum;
        
        for(int i=0; i<k; i++){
            sum =sum- cardPoints[k-i-1];
            sum =sum+ cardPoints[n-i-1];
            ans = max(ans,sum);
        }
        return ans;
        //TC=O(N)