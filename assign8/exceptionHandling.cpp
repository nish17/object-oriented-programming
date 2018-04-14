#include <bits/stdc++.h>
using namespace std;

class Memory
{
  int size;
  int *_array;

public:
  Memory()
  {
    size = 1;
    cout << "initial size of array is " << size << endl;
  }
  void allocateMemory(int i = 65534)
  {
    try
    {
      _array = new int[i * size];
      if (_array == NULL)
        throw "Not enough memory available\n";
    }
    catch (const char *m)
    {
      cout << m;
    }
  }
  int getSize()
  {
    return size;
  }
  void setSize(int s)
  {
    size = s;
    // _array[size];
    allocateMemory();
  }
  void setValues()
  {
    cout << "Input Values: ";
    for (int i = 0; i < getSize(); i++)
    {
      cin >> _array[i];
    }
  }
  void getValues()
  {
    cout << "Entered Values are: ";
    for (int i = 0; i < getSize(); i++)
    {
      cout << _array[i] << " ";
    }
    cout << endl;
  }

  void increaseSize()
  {
    setSize(2 * getSize());
  }
  ~Memory()
  {
    delete _array;
    cout << "Deleted the allocated memory" << endl;
    cout << "Deleted " << 2 * getSize() << " bytes\n";
  }
};

int main()
{
  Memory m1;
  int k, c;
  cout << "Input size of array: ";
  cin >> k;
  m1.setSize(k);
  m1.setValues();
  m1.getValues();

  while (1)
  {
    cout << "Do you want to increase the size of array? ";
    cin >> c;
    if (c)
    {
      try
      {
        m1.increaseSize();
      }
      catch (...)
      {
        cout
            << "Now, Size of array is " << m1.getSize() << endl;
      }
      m1.setValues();
      m1.getValues();
    }
    else
      break;
  }
  return 0;
}