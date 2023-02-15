#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int p1=0,p2=n-1;
      int count=0;
      while(p1<=p2)
      {
        if(s[p1]=='(' && s[p2]==')')
        {
          p1++;
          p2--;
        }
        
        else if(s[p1]=='(' && s[p2]!=')')
        {
          count++;
          p2--;
        }
        
        else if(s[p1]!='(' && s[p2]==')')
        {
          count++;
          p1++;
        }
        
        else if(s[p1]!='(' && s[p2]!=')')
        {
          count+=2;
          p1++;
          p2--;
        }
      }
      
      cout<<count<<endl;
    }

    return 0;
}