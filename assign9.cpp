#include <iostream>
using namespace std;

int main()
{

  int a, b, l = 0;
  cin >> a;
  if (cin)
  {
    // cout << a << " is an integer" << endl;
    l++;
  }
  else
  {
    cout << a << "is not an integer\n";
    throw "a is not an integer";
  }
  cin >> b;
  if (cin)
  {
    // cout << b << " is an integer" << endl;
    l++;
  }
  else
  {
    cout << b << "is not an integer\n";
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
    }

    cout << "a/b = " << a / b << endl;
  }
  catch (char const *t)
  {
    cerr << t << endl;
    // cout << "Printed using cout " << t << endl;
  }
  return 0;
}
