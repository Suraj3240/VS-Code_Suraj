#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // no of processes
    cin >> n;
    vector<int> bt(n);
    vector<int> wt(n, 0);
    vector<int> tat(n);
    int awt = 0, atat = 0;

    // enter burst times of P[i]
    for (auto &i : bt)
        cin >> i;

    // for waiting time....waiting time for P1 will be 0
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        awt += wt[i];
    }

    // WT = TAT - BT
    // TAT = WT + BT
    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        atat += tat[i];
    }

    // Print the data
    cout << "Process\tBurst\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << bt[i] << "\t" << tat[i] << "\t" << wt[i] << endl;
    }
    cout << endl;
    cout << "ATAT: " << atat / (n * 1.0) << endl;
    cout << "AWT: " << awt / (n * 1.0) << endl;
    return 0;
}