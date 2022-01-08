/*
Searches for a value in an m x n matrix. This matrix has the following properties:
    Integers in each row are sorted from left to right.
    The first integer of each row is greater than the last integer of the previous row.

*/

bool binarySearch(vector<int> arr, int l, int h, int target)
{
    if (l > h)
        return false;
    
    int mid = (l + h) / 2;
    if (arr[mid] == target)
        return true;
    else
    {
        if (arr[mid] < target)
            return binarySearch(arr, mid + 1, h, target);
        else
            return binarySearch(arr, l, mid - 1, target);
    }
}

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int maxCol = matrix[0].size() - 1;
    int i = 0;
    while (i < matrix.size())
    {
        if (target > matrix[i][maxCol])
            i++;
        else 
            break;
    }
    
    if (i == matrix.size())
        return false;
        
    return binarySearch(matrix[i], 0, maxCol, target);
}