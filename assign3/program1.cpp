#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
  int l, w, h;
  // float x, y;

public:
  Rectangle(int a, int b)
  {
    l = a;
    w = b;
  }
  Rectangle(int a = 1, int b = 2, int c = 2)
  {
    l = a;
    w = b;
    h = c;
  }
  int area()
  {
    return l * w * h;
  }
  int area(int a, int b)
  {
    return a * b;
  }
  int area(int a, int b, int c)
  {
    return a * b * c;
  }
};
int main()
{
  Rectangle r1 = Rectangle();
  int a = r1.area();
  cout << a << endl;

  Rectangle r3(2, 6, 8);
  int c = r3.area(2, 6, 8);
  cout << c << endl;

  return 0;
}