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

// TWO SUM II
// if array is sorted
// O(n) time complexity

    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        
        while(r > l){
            if(numbers[l] + numbers[r] > target) r--;
            else if(numbers[l] + numbers[r] < target) l++;
            else return vector<int>{l + 1, r + 1}; // oddly indexes start from 1 in the example on leetcode
        }
        
        return vector<int>{};
    }
