#include <bits/stdc++.h>
using namespace std;

class Microsoft
{
  int employees;
  string hq, name;

public:
  Microsoft()
  {
    employees = 10000;
    name = "Microsoft";
  }
  int getNoOfEmployees()
  {
    return employees;
  }
  string getBrandName()
  {
    return name;
  }
  string getHQ()
  {
    hq = "Redmond, Washington, United States";
    return hq;
  }
};

class Hardware : public Microsoft
{
  string name;

public:
  vector<string> products;
  Hardware()
  {
    products.push_back("keyboard");
    products.push_back("mouse");
    products.push_back("Surface");
    products.push_back("Windows Phone");
  }

  string getClassName()
  {
    name = "Hardware";
    return name;
  }
  void inputs()
  {
    string in;
    getline(cin, in);
    products.push_back(in);
  }

  int getProductsLength()
  {
    return products.capacity();
  }
};

int main()
{
  Microsoft ma;
  Hardware ha;
  cout << " Number of employees at " << ma.getBrandName() << " is " << ma.getNoOfEmployees() << " and its hq is in " << ma.getHQ() << endl;
  // << ha.getProductsLength() << endl;
  cout << "\n\n\n\n";
  for (int i = 0; i < ha.getProductsLength(); i++)
  {
    cout << ha.getBrandName() + " " + ha.products[i] + " (" + ha.getClassName() + ") " << endl;
    
  }
  return 0;
}