#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;
	ll ans;
	while (t--)
	{
		int mx_t, mx_n, sum_n;
		cin >> mx_t >> mx_n >> sum_n;
		int rem = sum_n % mx_n;
		int factor = sum_n / mx_n;
		int mul = min(factor, mx_t);

		if (sum_n % mx_n == 0)
		{
			ans = (mx_n * mx_n) * mul;
			cout << ans << endl;
		}
		else
		{
			if (sum_n / mx_n < mx_t)
			{
				ans = ((mx_n * mx_n) * mul) + (rem * rem);
				cout << ans << endl;
			}
			else
			{
				ans = (mx_n * mx_n) * mx_t;
				cout << ans << endl;
			}
		}
	}

	return 0;
}
