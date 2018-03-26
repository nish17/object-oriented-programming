/*
* CODECHEF: SOLVED
* PROBLEM STATEMENT: https://www.codechef.com/problems/TEST
*/
#include <bits/stdc++.h>
using namespace std;

class Timeout
{
  int n;

public:
  int getN()
  {
    return n;
  }
  void setN()
  {
    cin >> n;

    // n = t;
  }
  virtual void perform() {}
};
class mainClass : public Timeout
{
  int counter;

public:
  mainClass()
  {
    counter = 0;
  }

  void perform()
  {

    while (1)
    {
      setN();
      // setN(k);
      if (getN() != 42)
        cout << "\t" << getN() << endl;
      else
        break;
    }
  }
};
int main()
{
  Timeout t1;
  mainClass m1;
  m1.perform();
  return 0;
}