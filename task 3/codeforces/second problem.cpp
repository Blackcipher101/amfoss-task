#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){int f;
	char str[100], a[4];

	cin >> str;
	f = strlen(str);
	if (strlen(str) > 10)
	{
		f = f - 2;
		cout << str[0] << f << str[strlen(str) - 1];


	}
	else {
		cout << str;
	}
	}
    return 0;
}
