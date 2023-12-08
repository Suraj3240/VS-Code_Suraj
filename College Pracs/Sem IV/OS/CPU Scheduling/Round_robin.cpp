#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter no of processes: ";
    int n; // no of processes
    cin >> n;
    cout << "Enter BT of processes: ";
    vector<int> bt(n);
    vector<int> rem_bt(n);
    int j = 0;
    for (auto &i : bt)
    {
        cin >> i;
        rem_bt[j++] = i;
    }
    cout << "Enter Time Quantum: ";
    int qt;
    cin >> qt;
    vector<int> wt(n);
    vector<int> tat(n);
    int awt = 0, atat = 0;
    int count = 0;
    int curr_tat = 0;
    bool flag = 1;
    while (flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (rem_bt[i] <= 0)
            {
                continue;
            }

            if (rem_bt[i] <= qt)
            {
                count++;
                curr_tat += rem_bt[i];
                tat[i] = curr_tat;
                rem_bt[i] = 0;
                atat += tat[i];
            }
            else
            {
                rem_bt[i] -= qt;
                curr_tat += qt;
            }

            if (count == n)
            {
                break;
                flag = false;
            }
        }
        if (count == n)
        {
            flag = false;
        }
    }

    // waiting time WT=TAT-BT
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        awt += wt[i];
    }

    // Print the result
    cout << "\n\nProcess\tBurst\tTAT\tWT\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << bt[i] << "\t" << tat[i] << "\t" << wt[i] << endl;
    }
    cout << endl;
    cout << "ATAT: " << atat / (n * 1.0) << endl;
    cout << "AWT: " << awt / (n * 1.0) << endl;
    return 0;
}