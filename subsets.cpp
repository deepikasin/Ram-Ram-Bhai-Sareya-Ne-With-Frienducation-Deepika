class Solution {
private:
    void power(vector<vector<int>> &ans, vector<int>& nums, vector<int> output ,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        //exclude
        power(ans,nums,output,index+1);
        //include
        int ele=nums[index];
        output.push_back(ele);
        power(ans,nums,output,index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> output;
        power(ans,nums,output,index);
        return ans;
    }
};
//TC=O(N)