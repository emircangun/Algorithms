int findMaxCrossingSubArray(vector<int>& nums, int low, int mid, int high)
{
    int leftSum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= low; --i)
    {
        sum += nums[i];
        if (sum > leftSum)
            leftSum = sum;
    }
    
    int rightSum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= high; ++i)
    {
        sum += nums[i];
        if (sum > rightSum)
            rightSum = sum;
    }
    
    return (leftSum + rightSum);
}

int maxSubArrayFinder(vector<int>& nums, int low, int high)
{
    if (low == high)
        return nums[low];
    
    int mid = (low + high) / 2;
    int leftSum = maxSubArrayFinder(nums, low, mid);
    int rightSum = maxSubArrayFinder(nums, mid + 1, high);
    int crossSum = findMaxCrossingSubArray(nums, low, mid, high);
    
    return max(leftSum, max(rightSum, crossSum));
}

int maxSubArray(vector<int>& nums)
{
    return maxSubArrayFinder(nums, 0, nums.size() - 1);
}