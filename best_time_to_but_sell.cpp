int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            ans=max(ans,prices[i]-mini);
        }
        return ans;
    }
    //TC=O(N)
    //SC=O(1)