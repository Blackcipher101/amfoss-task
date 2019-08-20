#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int n, i, j,a[100],f;
	cin >> n;
	cin >> j;
	f = 0;
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
		if(j<a[i])
		f++;
	}
	cout << f;




	return 0;
  
  }
