// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Matrix
{
  int D;
  vector<int> m1[10][10];

public:
  Matrix(int d = 2)
  {
    D = d;
    // vector<int> m1[D][D];
  }
  void inputMatrix()
  {
    int k;
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        cin >> k;
        m1[i][j].push_back(k);
      }
    }
  }
  void printMatrix()
  {
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        cout << m1[i][j] << " ";
      }
      cout << endl;
    }
  }
  // Matrix operator+(Matrix mm)
  // {
  //   Matrix result;
  //   for (int i = 0; i < D; i++)
  //   {
  //     for (int j = 0; j < D; j++)
  //     {
  //       result[i][j] = this->[i][j] + mm[i][j];
  //     }
  //     cout << endl;
  //   }
  // }

  void add()
  {
    for (int i = 0; i < D; i++)
    {
      for (int j = 0; j < D; j++)
      {
        cout << m1[i][j] << " ";
      }
      cout << endl;
    }
  }
  void main_menu()
  {
    int ch;
    Matrix m2, m3;
    cout << "Press 1. Matrix addition\nPress 2. Matrix Scaling\n";
    cin >> ch;
    if (ch == 1)
    {
      cout << "Input values for matrix 1:\n";
      m2.inputMatrix();
      cout << "Input values for matrix 2:\n";
      m3.inputMatrix();
    }
    else if (ch == 2)
    {
    }
  }
};

int main()
{
  Matrix m;
  m.main_menu();
  return 0;
}