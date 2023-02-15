#include <iostream>
using namespace std;

int getDeadlyNumber(int A)
{
    for (int i = A; i >= 1; i--)
    {
        if (A % i == 0)
        {
            int P = 0;
            for (int j = i; j > 0; j >>= 1)
            {
                if (j & 1)
                {
                    P++;
                }
                else
                {
                    P--;
                }
                if (P < 0)
                {
                    break;
                }
            }
            if (P == 0)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int A;
    // cout << "Enter A: ";
    cin >> A;
    int res = getDeadlyNumber(A);
    if (res != -1)
    {
        cout << "The largest deadly number that is also a divisor of " << A << " is: " << res << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
