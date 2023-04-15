#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int num)
{
    if (st.empty())
    {
        st.push(num);
        return;
    }
    int x = st.top();
    st.pop();
    insertAtBottom(st, num);
    st.push(x);
}
void reverse(stack<int> &st)
{
    if (st.empty())
        return;
    int num = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, num);
}
int main()
{
    int n;
    cin >> n;
    stack<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push(a);
    }
    stack<int> temp = arr;
    cout << "\nOriginal Stack:\n";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    reverse(arr);
    temp = arr;
    cout << "\nReversed Stack:\n";
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}