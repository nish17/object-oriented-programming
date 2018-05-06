#include <iostream>
using namespace std;

class Car
{
  string engine;
  string chasis;
  string carMake;
  Car()
  {
  }
  void setEngineType(string t)
  {
    engine = t;
  }
  string getEngineType()
  {
    return engine;
  }
};

class Person
{
  string name;
  int no_Of_cars;

public:
  vector<string> cars;
};

int main()
{

  return 0;
}