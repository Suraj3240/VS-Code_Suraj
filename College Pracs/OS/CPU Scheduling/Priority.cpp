// Simple Priority based Scheduling
// smallest integer -> highest priority

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of processes: ";
    cin >> n;
    vector<vector<int>> pBt(n, vector<int>(3)); // priority,P number, BT;
    cout << "Enter Priority and BT of P[i]: \n";
    int num = 1;
    for (auto &i : pBt)
    {
        cin >> i[0]; // priority
        i[1] = num++;
        cin >> i[2]; // BT
    }
    // Sorted according to the priority
    sort(pBt.begin(), pBt.end());
    vector<int> tat(n);
    vector<int> wt(n);
    int atat = 0, awt = 0;
    int curr_tat = 0;
    for (int i = 0; i < n; i++)
    {
        curr_tat += pBt[i][2];
        tat[i] = curr_tat;
        atat += tat[i];
    }
    for (int i = 0; i < n; i++)
    {
        wt[i] = tat[i] - pBt[i][2];
        awt += wt[i];
    }
    cout << "\n\nProcess\tBT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << pBt[i][1] << "\t" << pBt[i][2] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    }
    cout << "\nATAT: " << atat / (n * 1.0);
    cout << "AWT: " << awt / (n * 1.0);
    return 0;
}