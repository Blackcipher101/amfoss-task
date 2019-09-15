#include<iostream>
using namespace std;
int hcf(int divisor, int dividend)   \\Euclid's division algorithm
{
	while (divisor != 0)
	{
		unsigned long long remainder = divisor;
		divisor = dividend % divisor;
		dividend = remainder;
	}
	return dividend;
}


int main()
{
	int t, x, ans;
	cin >> t;
	while (t--)
	{
		cin >> x;
		ans = 1;
		for (int i = 2; i <= x; i++) \\lcm is associative
			ans =ans*(i/hcf(ans,i));
		cout << ans<<endl;

	}
	return 0;
}
