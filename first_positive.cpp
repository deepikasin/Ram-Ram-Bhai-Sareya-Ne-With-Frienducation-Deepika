class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=nums[n-1];
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                k=i+1;
            }
        }
        if(k>=n){
            return 1;
        }
        if(nums[k]>1){
            return 1;
        }
        for(int i=k;i<n-1;i++){
            if(nums[i]+1==nums[i+1] || nums[i]==nums[i+1] ){
                continue;
            }
            else{
                return nums[i]+1 ;
            }
        }
        return ans+1;
    }
};
//TC=O(N)
//SC=O(1)