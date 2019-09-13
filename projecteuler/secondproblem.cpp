#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i, c = 0, a, b, t,sum=2;
    cin >> t;
    while (t--)
    {
        cin >> i;
        a = 1;
        b = 2;
        while (c < i)
        {
            c = a + b;
            a = b;
            b = c;
            if (c < i && c % 2 == 0)
            {
                sum = sum + c;
            }
        }
        cout << sum << endl;
        sum = 2;
        c = 0;

    }
    return 0;
}
