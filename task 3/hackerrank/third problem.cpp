#include <iostream>
using namespace std;

int main()
{
	int k, i, j;
	cin >> k;
	for (i = 0;i < k;i++)
	{
		
		for (j = 0;j < k;j++)
		{
			if (k - j - 1 <= i)
				cout << '#';
			else
			{
				cout << ' ';
			}

		}
		cout << endl;

	}


	return 0;
}
