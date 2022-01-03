vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> hashMap;
    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (hashMap.find(complement) != hashMap.end())
            return vector<int>{i, hashMap[complement]};
        
        hashMap[nums[i]] = i;
    }
    
    return vector<int>{};
} 