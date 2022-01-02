#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void findOccurrences(vector<int>& sorted_input, vector< pair<int, int> >& output)
{
    if (sorted_input.size() == 0)
        return; 

    int cur = sorted_input[0];
    output[0] = make_pair(cur, 1);
    int j = 0;
    for (int i = 1; i < sorted_input.size(); ++i)
    {
        if (sorted_input[i] == cur)
            output[j].second++;
        else
        {
            cur = sorted_input[i];
            j++;
            output[j] = make_pair(cur, 1);
        }  
    }
}

int main()
{
    vector<int> arr({2, 1});
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;

    vector< pair<int, int> > output(arr.size());
    findOccurrences(arr, output);

    for (int i = 0; i < output.size(); ++i)
        cout << output[i].first << ":" << output[i].second << endl;
    

    return 0;
}