class Task
{
public:
    int index;
    int startingTime;
    int processingTime;
    Task(int _index, int _startingTime, int _processingTime)
    {
        index = _index;
        startingTime = _startingTime;
        processingTime = _processingTime;
    }
};

class TaskComparator 
{
public:
    bool operator()(const Task& t1, const Task& t2)
    {
        return (t1.processingTime > t2.processingTime);
    }
};


vector<int> getOrder(vector<vector<int>>& tasks) {
    vector<int> res;
    priority_queue<Task, vector<Task>, TaskComparator> pq;
    pq.push(Task(0, tasks[0][0], tasks[0][1]));
    
    int time = tasks[0][0];
    int i = 1;
    while (i < tasks.size() || !pq.empty())
    {
        if (i < tasks.size() && tasks[i][0] <= time)
        {
            pq.push(Task(i, tasks[i][0], tasks[i][1]));
            i++;
            continue;
        }
        
        if (!pq.empty())
        {
            Task nextTask = pq.top();
            pq.pop();
            res.push_back(nextTask.index);
            time += nextTask.processingTime;
        }
        else
        {
            time++;
        }
    }
    
    return res;
}