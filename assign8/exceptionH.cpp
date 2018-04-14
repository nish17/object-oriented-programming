#include <bits/stdc++.h>
using namespace std;

int main()
{

  long long int a, b;
  cin >> a;
  try
  {
    if (!cin.fail())
    {
      cin >> b;
      try
      {
        if (!cin.fail())
        {
          try
          {
            if (b == 0)
            {
              throw "Division by zero is not possible!";
            }
            else
              cout << "a/b = " << a / b << endl;
          }
          catch (char const *t)
          {
            cerr << t << endl;
          }
        }
        else
        {
          throw "Denominator is not an integer\n";
        }
      }
      catch (const char *str)
      {
        cerr << str;
      }
    }
    else
      throw "Numberator is not an integer\n";
  }
  catch (const char *str)
  {
    cerr << str;
  }
  return 0;
}