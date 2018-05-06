#include <iostream>
using namespace std;

class Date
{
  int DD, MM, YYYY;

public:
  Date(int d = 1, int m = 1, int y = 1111)
  {
    DD = d;
    MM = m;
    YYYY = y;
  }
  void set(int d = 1, int m = 1, int y = 1111)
  {
    DD = d;
    MM = m;
    YYYY = y;
  }
  bool checkValidity(int d, int m)
  {
    if ((d > 0 && d <= 31) && (m > 0 && m <= 12))
      return true;
    else
      return false;
  }
  void addDate(int days)
  {
    DD = DD + days;
    while (DD > 31)
    {
      if ((MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12) && DD > 31)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 31)
          DD = DD - 31;
      }
      else if ((MM == 4 || MM == 6 || MM == 9 || MM == 11) && DD > 30)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 30)
          DD = DD - 30;
      }
      else if ((MM == 2) and DD > 28)
      {
        MM++;
        if (MM > 12)
        {
          MM = 1;
          YYYY++;
        }
        if (DD > 28)
          DD = DD - 28;
      }
    }
  }
  void subtractDate(int days)
  {
    DD = DD - days;
    while (DD < 1)
    {
      if ((MM == 1 || MM == 3 || MM == 5 || MM == 7 || MM == 8 || MM == 10 || MM == 12) && DD < 1)
      {
        MM--;
        if (MM < 1)
        {
          MM = 12;
          YYYY--;
        }
        if (DD < 1)
          DD = 31 + DD;
      }
      else if ((MM == 4 || MM == 6 || MM == 9 || MM == 11) && DD < 1)
      {
        MM--;
        if (MM < 1)
        {
          MM = 12;
          YYYY--;
        }
        if (DD < 1)
          DD = 30 + DD;
      }
      else if ((MM == 2) and DD < 1)
      {
        MM--;
        if (MM < 1)
        {
          MM = 12;
          YYYY--;
        }
        if (DD < 1)
          DD = 28 + DD;
      }
    }
  }
  void PrintDate()
  {
    cout << this->DD << "/" << this->MM << "/" << this->YYYY << endl;
  }
  Date operator-(Date d)
  {
    // cout << abs(this->YYYY - d.YYYY) << " years " << abs(this->MM - d.MM) << " months " << abs(this->DD - d.DD) << " days\n";
    Date ds;
    ds.DD = this->DD - d.DD;
    ds.MM = this->MM - d.MM;
    ds.YYYY = this->YYYY - d.YYYY;
    return ds;
  }
  void main_menu()
  {
    int ch;
    cout << "Press 1. >Add to a date\n";
    cout << "Press 2. >Subtract from a date\n";
    cout << "Press 3. >Duration between two dates\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
      int n;
      cout << "Input base date\n";
      // cin >> DD >> MM >> YYYY;
      scanf("%d/%d/%d", &DD, &MM, &YYYY);
      if (checkValidity(DD, MM))
      {
        cout << "how many days you wanna add?\n";
        cin >> n;
        addDate(n);
        PrintDate();
      }
      else
        cout << "invalid date\n";

    case 2:
      cout << "Input base date\n";
      scanf("%d/%d/%d", &DD, &MM, &YYYY);
      if (checkValidity(DD, MM))
      {
        cout << "how many days you wanna subtract?\n";
        cin >> n;
        subtractDate(n);
        PrintDate();
      }
      else
        cout << "invalid date\n";
    case 3:
      Date d1, d2;
      cout << "Input Date1\n";
      scanf("%d/%d/%d", &DD, &MM, &YYYY);
      if (checkValidity(DD, MM))
      {
        d1.set(DD / MM / YYYY);
        cout << "Input Date2\n";
        scanf("%d/%d/%d", &DD, &MM, &YYYY);
        if (checkValidity(DD, MM))
        {
          d2.set(DD / MM / YYYY);
          Date d3 = d1 - d2;
          d3.PrintDate();
        }
        else
          cout << "Invalid Date2\n";
      }
      else
        cout << "Invalid Date1\n";
    }
  }
};

int main()
{
  Date d1;
  d1.main_menu();

  return 0;
}