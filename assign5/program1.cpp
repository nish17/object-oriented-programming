#include <bits/stdc++.h>
using namespace std;

class Electronics
{
  int charging_time;

public:
  int getChargingTime(int n)
  {
    if (n < 10)
    {
      charging_time = n;
      cout << "It uses fast charging technology\n";
      return charging_time;
    }
    else
    {
      cout << "this technology requires constant power source\n";
      return 0;
    }
  }
};

class mobile_phones : public Electronics
{
public:
  void charging_technology()
  {
    cout << "Qualcomm® Quick Charge™ technology\n";
  }
  void charge_time()
  {
    cout << getChargingTime(5) << " mins of charging = 5Hours of battery time\n";
  }
};

class smart_assistants : public Electronics
{
public:
  void charging_technology()
  {
    cout << "Default charging technology\n";
  }
  void charge_time()
  {
    cout << getChargingTime(12) << "it requires constant power source\n";
  }
};

int main()
{
  mobile_phones pixel;
  smart_assistants alexa;
  Electronics *el1 = &pixel;
  Electronics *el2 = &alexa;

  cout << "\n For Pixel Devices " << el1->getChargingTime(5) << endl;
  pixel.charging_technology();
  pixel.charge_time();
  cout << "\n For alexa (echo)" << el2->getChargingTime(99) << endl;
  alexa.charging_technology();
  alexa.charge_time();
}