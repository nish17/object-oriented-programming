#include <iostream>
using namespace std;

class String
{

  int len;
  char *str;

public:
  String()
  {
    len = 0;
    str = new char[len + 1];
  }
  String(char *s)
  {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
  }

  friend String operator+(String &s1, String s2);
};

String operator+(String &s1, String &s2)
{
  String temp;
  temp.len = s1.len + s2.len;
  delete temp.str;
  temp.str = new char[temp.len + 1];
  strcpy(temp.str, s1.str);
  strcat(temp.str, s2.str);
}
int main()
{

  return 0;
}