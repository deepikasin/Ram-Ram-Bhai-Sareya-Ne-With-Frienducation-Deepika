class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
           ans=ans^i;
           ans=ans^nums[i];
        }
        return ans;
    }
};
//TC=O(N)
//Logic the missing number will be output in only once other twice therefor they will be cancelled out
//Space C=O(1)