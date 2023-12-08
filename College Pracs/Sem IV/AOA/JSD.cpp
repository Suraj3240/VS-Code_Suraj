// Job sequencing with deadlines

#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int deadline;
    int profit;
};
bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}
void solve(Job job[], int n)
{
    sort(job, job + n, comp);
    int maxD = 0;
    for (int i = 0; i < n; i++)
    {
        maxD = max(maxD, job[i].deadline);
    }
    vector<int> t(maxD + 1, -1);
    int maxProfit = 0;
    int jobsComp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = job[i].deadline; j > 0; j--)
        {
            if (t[j] == -1)
            {
                t[j] = job[i].id;
                maxProfit += job[i].profit;
                jobsComp++;
                break;
            }
        }
    }
    cout << "Jobs completed: " << jobsComp << endl;
    cout << "Sequence of Jobs completed: \n";
    for (int i = 1; i < t.size(); i++)
    {
        cout << "|\t" << t[i] << "\t";
    }
    cout << "|" << endl;
    cout << "Max profit: " << maxProfit << endl;
}
int main()
{
    cout << "Enter no of jobs: ";
    int n;
    cin >> n;
    Job job[n];
    cout << "Enter jobs with their deadlines and profits: \n";
    for (int i = 0; i < n; i++)
    {
        int dd;
        int pf;
        cin >> dd >> pf;
        job[i].id = i + 1;
        job[i].deadline = dd;
        job[i].profit = pf;
    }
    solve(job, n);
    return 0;
}