#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using 2 inputs";
    return (a + b);
    cout << endl;
}

int sum(int a, int b, int c)
{
    cout << "Using 3 inputs";
    return (a + b + c);
    cout << endl;
}

// Cylinder
float volc(int r, int h)
{
    cout << "Using Cylinder";
    return (3.14 * r * r * h);
}

// Spheres
float vol(int t, double k)
{
    cout << "Using Sphere";
    return (0.75 * 3.14 * t * t * k);
}

int main()
{
    // cout << "The sum of 3 and 4 is " << sum(3, 4) << endl;
    // cout << "The sum of 3,4 and 5 is " << sum(3, 4, 5) << endl;
    cout << "The vol is " << volc(3, 6.2) << endl;
    cout << "The vol is " << vol(5, 10.36) << endl;

    return 0;
}