 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // there is enough space in nums1 to merge and replace both arrays
   
        int last = m + n - 1; // pointer to the end of nums1
        
        while(m > 0 && n > 0){
            if(nums1[m - 1] > nums2[n - 1]){
                nums1[last] = nums1[m - 1];
                m--;
                last--;
            }
            else{
                nums1[last] = nums2[n - 1];
                n--;
                last--;
            }
        }
        
        while (n > 0){
            nums1[last] = nums2[n - 1];
            n--;
            last--;
        }
    }
