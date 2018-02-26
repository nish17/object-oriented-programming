#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
  int l, w, h, area;

public:
  Rectangle()
  {
    l = 1;
    w = 1;
    h = 0;
  }
  void set(int a, int b)
  {
    l = a;
    w = b;
  }
  void set(int a, int b, int c)
  {
    l = a;
    w = b;
    h = c;
  }
  void calulateArea()
  {
    if (h == 0)
    {
      area = l * w;
      cout << "Area = " << area << endl;
    }
    else
    {
      area = l * w * h;
      cout << "Area = " << area << endl;
    }
  }
};

int main()
{
  Rectangle r1;
  Rectangle r2;
  r1.set(10, 12);
  r2.set(6, 9, 7);
  r1.calulateArea();
  r2.calulateArea();
}
