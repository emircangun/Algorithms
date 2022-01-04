vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> o1;
    for (int i = 0; i < nums1.size(); ++i)
    {
        if (o1.find(nums1[i]) != o1.end())
            o1[nums1[i]]++;
        else
            o1[nums1[i]] = 1;
    }
    
    map<int, int> o2;
    for (int i = 0; i < nums2.size(); ++i)
    {
        if (o2.find(nums2[i]) != o2.end())
            o2[nums2[i]]++;
        else
            o2[nums2[i]] = 1;
    }
    
    map<int, int> *minPtr, *maxPtr;
    if (o1.size() <= o2.size())
    {
        minPtr = &o1;
        maxPtr = &o2;
    }
    else
    {
        minPtr = &o2;
        maxPtr = &o1;
    }
    
    vector<int> res;
    for (auto it =  (*minPtr).begin(); it != (*minPtr).end(); ++it)
    {
        int value = it->first;
        if ((*maxPtr).find(value) != (*maxPtr).end())
        {
            int minOccurrences = min((*minPtr)[value], (*maxPtr)[value]);
            for (int i = 0; i < minOccurrences; ++i)
                res.push_back(value);
        }
    }
    
    return res;
}