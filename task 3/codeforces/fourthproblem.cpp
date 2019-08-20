 #include <iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,r=0,i;
	cin >> n;
	string arr;
	for (i = 0;i < n;i++)
	{
		cin >> arr;
		if (arr.compare("X++")==0 || arr.compare("++X")==0)
		{
			r++;
		}
		if (arr.compare("X--") == 0 || arr.compare("--X") == 0)
			r--;
	}
	cout << r;





	return 0;
}
