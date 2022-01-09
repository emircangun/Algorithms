vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    if (m * n != r * c)
        return mat;
    
    vector<vector<int>> res(r, vector<int> (c, 0));
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int k = i * c + j;
            int row = k / n;
            int col = k % n;
            res[i][j] = mat[row][col];
        }
    }
    return res;
}