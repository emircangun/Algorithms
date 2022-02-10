int rob(vector<int>& nums) {
        // two iterations rob1 & rob2
        int rob1 = 0;
        int rob2 = 0;
        int max = 0;
        int len = nums.size();
  
        // dynamic programming approach
        for(int i = 0; i < nums.size(); i++){
            if(rob1 + nums[i] > rob2){
                max = rob1 + nums[i];
            }
            else{
                max = rob2;
            }
            rob1 = rob2;
            rob2 = max;
        }
        return rob2;
    }
