int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int index=0;
        int maxi=sum;
        for(int i=1;i<nums.size();i++){
            if(sum<0){
                sum=nums[i];
            }
            else{
                sum=sum+nums[i];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
    //TC=O(N)