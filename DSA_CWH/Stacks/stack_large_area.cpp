#include <bits/stdc++.h>
using namespace std;

void prevSmall(vector<int> &heights, vector<int> &prev, int n)
{
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        while (st.top() != -1 && heights[i] <= heights[st.top()])
            st.pop();
        prev[i] = st.top();
        st.push(i);
    }
}
void nextSmall(vector<int> &heights, vector<int> &next, int n)
{
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.top() != -1 && heights[i] <= heights[st.top()])
            st.pop();
        next[i] = st.top();
        st.push(i);
    }
}
int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> prev(n);
    prevSmall(heights, prev, n);
    vector<int> next(n);
    nextSmall(heights, next, n);
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = next[i] - prev[i] - 1;
        int h = heights[i];
        ans = max(ans, l * h);
    }
    return ans;
}

int main()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
        cin >> v[i];
    cout << largestRectangleArea(v);
    return 0;
}