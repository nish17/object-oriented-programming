#include <bits/stdc++.h>
using namespace std;

class Matrix
{
  int D;
  int a[10][10];

public:
  void setDimension(int c)
  {
    D = c;
  }
  void getInput()
  {
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        cin >> a[i][j];
      }
    }
  }
  void printMatrix()
  {
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        cout << this->a[i][j] << " ";
      }
      cout << endl;
    }
  }
  Matrix operator+(Matrix m)
  {
    Matrix result;
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        this->a[i][j] = this->a[i][j] + m.a[i][j];
      }
    }
    return *this;
    // result.printMatrix();
  }
  Matrix operator*(const int m)
  {
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        this->a[i][j] = this->a[i][j] * m;
      }
    }
    return *this;
  }
};
int main()
{
  Matrix s1, s2;

  int ch, dd;
  cout << "Press 1. Add two Matrices\n";
  cout << "Press 2. Scale Matrix\n";
  cin >> ch;
  cout << "Input dimension of matrix\n";
  cin >> dd;
  if (ch == 1)
  {
    cout << "Input values for 1st matrix:\n";
    s1.setDimension(dd);
    s1.getInput();
    cout << "Input values for 2nd matrix:\n";
    s2.setDimension(dd);
    s2.getInput();
    s1 = s1 + s2;
    s1.printMatrix();
  }
  else if (ch == 2)
  {

    int s;
    cout << "Input values for 1st matrix:\n";
    s1.setDimension(dd);
    s1.getInput();
    cout << "Input scaling factor\n";
    cin >> s;
    s1 = s1 * s;
    s1.printMatrix();
  }

  return 0;
}