#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int id;
    int BT;
    int AT;
};

void cal_wt(Process proc[], int wt[], int n)
{
    int rt[n];
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].BT;

    int comp = 0, time = 0, minTime = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;

    while (comp != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (proc[i].AT <= time && rt[i] <= minTime && rt[i] > 0)
            {
                minTime = rt[i];
                shortest = i;
                check = true;
            }
        }
        if (!check)
        {
            time++;
            continue;
        }
        rt[shortest]--;
        minTime = rt[shortest];
        if (minTime == 0)
        {
            comp++;
            minTime = INT_MAX;
            check = false;
            finish_time = time + 1;
            wt[shortest] = finish_time - proc[shortest].AT - proc[shortest].BT;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }
        time++;
    }
}

void cal_tat(Process proc[], int wt[], int tat[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + proc[i].BT;
    }
}

void final_cal(Process proc[], int n)
{
    int wt[n], tat[n], awt = 0, atat = 0;
    cal_wt(proc, wt, n);
    cal_tat(proc, wt, tat, n);

    cout << "P\tBT\tAT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        awt += wt[i];
        atat += tat[i];
        cout << proc[i].id << "\t" << proc[i].BT << "\t" << proc[i].AT << "\t" << tat[i] << "\t" << wt[i] << "\n";
    }

    cout << endl;
    cout << "ATAT: " << atat / (n * 1.0) << endl;
    cout << "AWT: " << awt / (n * 1.0) << endl;
}

int main()
{
    int n;
    cin >> n; // no of processes
    Process proc[n];
    cout << "Enter BT and AT for each P[i]" << endl;
    for (int i = 0; i < n; i++)
    {
        int bt, at;
        proc[i].id = i + 1;
        cin >> bt;
        proc[i].BT = bt;
        cin >> at;
        proc[i].AT = at;
    }
    final_cal(proc, n);
    return 0;
}