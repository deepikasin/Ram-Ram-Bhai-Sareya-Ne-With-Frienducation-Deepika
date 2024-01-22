class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        for(int i=0;i<n;){
            if(i==n-1){
                ans=nums[n-1];
                break;
            }
            else if(nums[i]==nums[i+1]){
                i=i+3;
            }
            else if(nums[i]!=nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};