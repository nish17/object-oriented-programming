#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Input 1: ";
  cin >> a;
  cout << "input 2: ";
  cin >> b;

  try
  {
    if (b == 0)
    {
      throw "Division by zero detected\n";
    }
    else
    {
      cout << a / b << endl;
    }
  }
  catch (const char *m)
  {
    cerr << m;
  }

  return 0;
}