// d is the number of left rotations to perform

vector<int> rotate-left(int d, vector<int> arr) {
    int temp;
    vector<int> arr2(arr.size());
    for(int i = 0; i < arr.size(); i++){
        temp = i - d;
        if (temp < 0) {
            temp += arr.size();
        }
        arr2[temp] = arr[i];
    }
    
    return arr2;
}
