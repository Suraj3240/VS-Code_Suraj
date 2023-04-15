#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &st, int num)
{
    if (st.empty() || st.top() < num)
    {
        st.push(num);
        return;
    }
    int n = st.top();
    st.pop();
    sortedInsert(st, num);
    st.push(n);
}

void sort_stack(stack<int> &st)
{
    if (st.empty())
        return;
    int num = st.top();
    st.pop();
    sort_stack(st);
    sortedInsert(st, num);
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> temp = st;
    cout << "\nOriginal stack:\n";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    sort_stack(st);
    cout << "\nSorted stack:\n";
    temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}