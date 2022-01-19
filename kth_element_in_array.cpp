// randomized partition with quicksort's partition
// return the last index of the partited key
// [larger][key][smaller and equals]
int partition(vector<int>& nums, int l, int h)
{
    int keyIndex = l + rand() % (h - l + 1);    // randomized partition
    swap(nums[keyIndex], nums[h]);
    
    int i = l, j = l;
    while (i < h)
    {
        if (nums[i] > nums[h])
            swap(nums[i], nums[j++]);
        i++;
    }
    swap(nums[h], nums[j]);
    return j;
}

int KthLargestElementRecursive(vector<int>& nums, int p, int r, int k)
{
    if (p >= r)
        return nums[p];
    
    int q = partition(nums, p, r);
    int i = q - p + 1;
    if (k == i)
        return nums[q];
    else if (k < i)
        return KthLargestElementRecursive(nums, p, q - 1, k);
    else
        return KthLargestElementRecursive(nums, q + 1, r, k - i);
}

int findKthLargest(vector<int>& nums, int k) {
    return KthLargestElementRecursive(nums, 0, nums.size() - 1, k);
}