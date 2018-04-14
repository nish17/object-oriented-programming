#include <iostream>
using namespace std;

int main()
{

  int a, b, l = 0;
  cin >> a;
  try
  {
    if (cin)
    {
      // cout << a << " is an integer" << endl;
      l++;
    }
    else
    {
      // cout << "not an integer\n";
      throw "not an integer";
    }
  }
  catch (char const *t)
  {
    cout << t << endl;
  }
  cin >> b;
  try
  {
    if (cin)
    {
      // cout << b << " is an integer" << endl;
      l++;
    }
    else
    {
      cout << "not an integer\n";
    }
  }
  catch (char const *t)
  {
    cout << t << endl;
  }
  if (l == 2)
  {
    try
    {
      if (b == 0)
      {
        throw "Division by zero is not possible!\n";
      }
      else if (b)
        a = a / b;
      cout << "a/b = " << a / b << endl;
    }

    catch (char const *t)
    {
      cerr << t << endl;
      // cout << "Printed using cout " << t << endl;
    }
  }
  return 0;
}
