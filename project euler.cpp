first problem
#include <stdio.h>
using namespace std;

int main()
{
    int i, j, a, b = 0, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &i);;
        for (a = 3;a < i;a++)
        {
            if (a % 3 == 0 || a % 5 == 0)
            {
                b = b + a;
            }

        }
        printf("%d\n",b);
        b = 0;
    }
    return 0;
}
second problem
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
third problem
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
   int i, c, a, b, t,d;
    cin >> t;
    while (t--)
    {    
        d = 0;
        cin >> a;
        for (i = 2;i <= a;i++)
        {
            if (a % i == 0)
            {

                b = 1;

                for (c = 2; c <= sqrt(i); c++)
                {
                    if (i % c == 0)
                    {
                        b = 0;
                        break;
                    }

                }


                if (b == 1)
                {
                    if (d < i)
                        d = i;

                }
            }
        }
        cout << d <<endl;

    }



    return 0;
}

