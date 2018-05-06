#include <bits/stdc++.h>
#define N 3

using namespace std;

class _Vectors
{
  vector<float> _array;

public:
  void createVector(int n)
  {
    _array.push_back(n);
  }
  void printVector()
  {
    for (int i = 0; i < N; i++)
    {
      cout << _array[i] << " ";
    }
    cout << endl;
  }
  void scaleVector(int x)
  {
    cout << "before scaling:\n";
    printVector();
    cout << "After scaling:\n";
    for (int i = 0; i < N; i++)
    {
      _array[i] = _array[i] * x;
    }
    printVector();
  }

  float magnitudeVector()
  {
    float x = 0;
    for (int i = 0; i < N; i++)
    {
      x = x + pow(_array[i], 2);
    }
    return sqrt(x);
  }
};

int main()
{
  _Vectors obj1, obj2;

  int t, n;
  cout << "Input values for 1st vector:\n";
  for (int i = 0; i < N; i++)
  {
    cin >> t;
    obj1.createVector(t);
  }

  cout << "Input values for 2nd vector:\n";
  for (int i = 0; i < N; i++)
  {
    cin >> t;
    obj2.createVector(t);
  }

  cout << "Scale the first vector to?\n";
  cin >> n;
  float ans1 = obj1.magnitudeVector();
  obj1.scaleVector(n);

  cout << "Scale the second vector to?\n";
  cin >> n;
  float ans2 = obj2.magnitudeVector();
  obj2.scaleVector(n);

  cout << "Magnitude of first vector before scaling: " << ans1 << endl;
  cout << "Magnitude of first vector after scaling: " << obj1.magnitudeVector() << endl;

  cout << "Magnitude of second vector before scaling: " << ans2 << endl;
  cout << "Magnitude of second vector after scaling: " << obj2.magnitudeVector() << endl;
  return 0;
}