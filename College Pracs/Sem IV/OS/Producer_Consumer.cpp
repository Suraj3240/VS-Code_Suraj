#include <bits/stdc++.h>
using namespace std;
#define n 3
int mutex = 1, full = 0, empty_n = n, arr[n], curr = 0;

int wait(int s)
{
    return s - 1;
}
int signal(int s)
{
    return s + 1;
}
void producer()
{
    empty_n = wait(empty_n);
    mutex = wait(mutex);
    arr[curr++] = 1;
    mutex = signal(mutex);
    full = signal(full);
}
void consumer()
{
    full = wait(full);
    mutex = wait(mutex);
    curr--;
    mutex = signal(mutex);
    empty_n = signal(empty_n);
}
int main()
{
    int choice;
    do
    {
        cout << "\n\n1. Producer\n2. Consumer\n3. Exit\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (full == n)
                cout << "Buffer is full.\n";
            else
                producer();
            break;
        case 2:
            if (empty_n == n)
                cout << "Buffer is empty.\n";
            else
                consumer();
            break;
        case 3:
            cout << "Exiting....";
            break;
        default:
            cout << "Enter a valid choice.";
        }

        if (curr == 0)
        {
            // do nothing
        }
        else
        {
            cout << "Current Buffer: \n";
            for (int i = 0; i < curr; i++)
            {
                cout << 1 << " ";
            }
        }

        cout << endl;
    } while (choice != 3);
    return 0;
}