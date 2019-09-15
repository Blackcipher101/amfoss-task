#include <iostream>
#include<math.h>
using namespace std;



int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int max;
    cin >> max;

    bool found = false;

    for (int main = max / 1000; main >= 100 && !found; main--)
    {
        int palindrome;
        palindrome = main * 1000;   
        palindrome += main / 100;             
        palindrome += ((main / 10) % 10) * 10; 
        palindrome += (main % 10) * 100; 
      if (palindrome >= max)
        continue;
      for (unsigned int i = 100; i <= sqrt(palindrome); i++)
        if (palindrome % i == 0) 
        {
          auto other = palindrome / i;
          if (other < 100 || other > 999)
            continue;

          cout << palindrome << endl;
          found = true;
          break;
        }
    }
  }
  return 0;
}
