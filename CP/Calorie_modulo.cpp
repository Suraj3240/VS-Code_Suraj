#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int km, cal_1;
        // cin>>km>>cal_1;
        scanf("%d %d", &km, &cal_1);
        int mul = 2 * cal_1;
        //    int counter=0;
        int mod = 1000000007;
        //    int final_cal;

        int final;
        if (km == 1)
        {
            cout << cal_1 << endl;
        }
        else if (km == 2)
        {
            cout << cal_1 * 2 << endl;
        }
        else
        {
            final = mul * pow(2, km - 3);
            final = final % mod;
            // for(int i=3;i<=km;i++)
            // {
            // mul=mul*2;
            // mul=mul%mod;

            //    counter++;
            //    mul=((mul%mod)*(2%mod));
            // counter=counter;
            //    final_cal=(mul*pow(2,i));
        }

        //    int final_cal=((mul%mod)*(pow(2,counter)%mod))%mod;
        //    int final_cal=((mul)*(pow(2,counter)));
        cout << final << endl;

        // cout<<mul%mod<<endl;
        // printf("%d\n",mul);
        //  cout<<final_cal<<endl;
    }

    return 0;
}