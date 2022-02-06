// Dynamic programming - cut rod algorithm
int cut_rod(vector<int> p, int n)
{
    if (n == 0)
        return 0;
    
    int q = INT_MIN;
    for (int i = 0; i < n; ++i)
        q = max(q, p[i] + cut_rod(p, n - i));
    
    return q;
}