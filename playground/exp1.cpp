#include <bits/stdc++.h>
using namespace std;
int main();

class magic
{
  int a;

public:
  virtual void printOut()
  {
    // do something
  }

  friend void print();
  friend int main();

  void classicFunction()
  {
    main();
  }
};

void print()
{
  cout << "Friend function\n";
  cout << "called from main\n";
}
int main()
{
  cout << "i was called from class";
  return 0;
  magic m1;
  m1.classicFunction();
  m1.printOut();
}
