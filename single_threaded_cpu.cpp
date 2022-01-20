bool CompareDist(pair<int,int>, pair<int,int> b)
{
    return a.second > b.second;
}
vector<int> getOrder(vector<vector<int>>& tasks)
{
    vector<int> res;
    int i = 1;
    priority_queue<pair<int,int>,vector<pair<int,int>>,CompareDist> pq;
    pq.push(make_pair(tasks[0][0], tasks[0][1]));
    int time = tasks[0][0];
    while (i <= tasks.size())
    {
        if (tasks[i][0] == time)
        {
            pq.push(make_pair(tasks[i][0], tasks[i][1]));
        }
    }
}