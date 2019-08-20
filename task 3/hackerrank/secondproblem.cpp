#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int  k,i, j,c=0,d=0;
	int a[100][100];
	cin >> k;
	for (i = 0;i < k;i++)
	{
		for ( j = 0; j < k; j++)
		{
			cin >> a[i][j];
		}

	}
	for (i = 0;i < k;i++)
	{
		for (j = 0; j < k; j++)
		{
			if (i == j)
				c = c + a[i][j];
			if (k - j - 1 == i)
				d = d + a[i][j];
		}

	}
	int f;
	f = c - d;
	cout << abs(f);




	
		return 0;
}
