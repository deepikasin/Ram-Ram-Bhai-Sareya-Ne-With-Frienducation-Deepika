vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int output=1;
        int zero =0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                output=output*nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(zero>1){
                ans.push_back(0);
            }
            else if(zero==1){
                if(nums[i]==0){
                    ans.push_back(output);
                }
                else{
                    ans.push_back(0);
                }
            }
            else{
                ans.push_back(output/nums[i]);
            }
        }
        return ans;
    }
    //TC-O(N)
    //SC-O(N)