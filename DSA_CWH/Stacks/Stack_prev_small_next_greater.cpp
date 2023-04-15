#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> prev;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = v[i];
        while (st.top() != -1 && curr <= st.top())
            st.pop();
        prev.push_back(st.top());
        st.push(curr);
    }
    vector<int> next(n);
    stack<int> s;
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.top() != -1 && v[i] >= s.top())
            s.pop();
        next[i] = s.top();
        s.push(v[i]);
    }

    // Original vector
    for (auto i : v)
        cout << i << " ";
    cout << endl;
    // Prev small elem vector
    for (auto i : prev)
        cout << i << " ";
    cout << endl;
    // Next Greater elem vector
    for (auto i : next)
        cout << i << " ";
    return 0;
}