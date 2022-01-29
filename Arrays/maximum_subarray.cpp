    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int cur_sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if (cur_sum < 0) cur_sum = 0;
            cur_sum += nums[i];
            if (cur_sum > max_sum) max_sum = cur_sum;
        }
        return max_sum;
    }
