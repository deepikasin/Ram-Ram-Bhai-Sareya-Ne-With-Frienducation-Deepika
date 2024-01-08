int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0, curr_sum = 0;
        for (int i = 0; i < n; i++) {
            curr_sum = 0;
            for (int j = i; j < n; j++) {
                curr_sum += nums[j];  
                if (curr_sum == k)
                    count++;  
            }       
        }
        return count;
    }