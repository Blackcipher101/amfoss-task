#include <iostream>
using namespace std;

int main()
{
	int k, i, j,arr[100000];
	cin >> k;
	for ( i = 0; i < k; i++)
	{
		cin >> arr[i];

	}
	int l=0;
	j = arr[0];
	for (i = 0; i < k; i++)
	{
		if (arr[i] > j)
			j = arr[i];

	}
	for (i = 0; i < k; i++)
	{
		if (arr[i] == j)
			l++;

	}
	cout << l;
	

	
	
	
		return 0;
}
