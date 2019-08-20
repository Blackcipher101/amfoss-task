#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[100];
	int i=0,flag=0;
	cin >> a;
	while
		( a[i] != '\0')
	{
		if (a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] == a[i + 3] && a[i] == a[i + 4] && a[i] == a[i + 4] && a[i] == a[i + 5] && a[i] == a[i + 6] && a[i] == a[i + 7])
		{
			cout << "YES";
			flag = 1;
			break;
		}
		i++;
	}
	if(flag!=1)
	cout << "NO";





	return 0;
}
