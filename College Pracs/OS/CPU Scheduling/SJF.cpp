// Shortest Job First w/o Arrival time
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // no of processes
    cin >> n;

    // vec of vec(Burst Time, Process number)
    vector<vector<int>> bt(n, vector<int>(2));
    // enter burst times of P[i]
    for (int i = 0; i < n; i++)
    {
        cin >> bt[i][0];
        bt[i][1] = i + 1;
    }
    // sort according to BT
    sort(bt.begin(), bt.end());

    vector<int> wt(n);
    vector<int> tat(n, 0);
    int awt = 0,
        atat = 0;
    tat[0] = bt[0][0];
    atat += tat[0];
    for (int i = 1; i < n; i++)
    {
        tat[i] = tat[i - 1] + bt[i][0];
        atat += tat[i];
    }
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i][0];
        awt += wt[i];
    }
    cout << "Process\tBurst\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << bt[i][1] << "\t" << bt[i][0] << "\t" << tat[i] << "\t" << wt[i] << endl;
    }
    cout << endl;
    cout << "ATAT: " << atat / (n * 1.0) << endl;
    cout << "AWT: " << awt / (n * 1.0) << endl;

    return 0;
}