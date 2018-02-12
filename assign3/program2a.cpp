#include <bits/stdc++.h>
using namespace std;

class Google
{
  int noOfEmployees;
  int withBTechDegree;
  int withoutBTechDegree;

public:
  Google(int a, int b)
  {
    withBTechDegree = a;
    withoutBTechDegree = b;
  }
  void input()
  {
    cout << "input employees with BTech Degree: ";
    cin >> withBTechDegree;
    cout << "input employees without BTech Degree: ";
    cin >> withoutBTechDegree;
  }
  void totalEmployees()
  {
    this->noOfEmployees = this->withBTechDegree + this->withoutBTechDegree;
  }
  void display()
  {
    cout << "Employees with Btech Degree " << this->withBTechDegree << endl;
    cout << "Employees without Btech Degree " << this->withoutBTechDegree << endl;
    cout << "Total Employees " << this->noOfEmployees << endl;
  }
};
class Microsoft : public Google
{
public:
  Microsoft(int a, int b);
};
Microsoft::Microsoft(int a, int b) : Google(a, b)
{
  //do something
}

int main()
{
  Google gmail = Google(50, 70);
  gmail.input();
  gmail.totalEmployees();
  gmail.display();

  Microsoft office(10, 20);
  office.input();
  office.totalEmployees();
  office.display();
}