#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
  int length;
  char *str;

public:
  String()
  {
    length = 0;
    str = new char[length + 1];
  }

  String(char *s)
  {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }

  friend String operator+(String &s1, String &s2);
  friend void operator==(String &s1, String &s2);
  friend void show(String &s);
};
void show(String &s)
{
  cout << s.str << endl;
}

String operator+(String &s1, String &s2)
{
  String temp;
  temp.length = s1.length + s2.length;
  delete temp.str;
  temp.str = new char[temp.length + 1];
  strcpy(temp.str, s1.str);
  strcat(temp.str, s2.str);
  return temp;
}
void operator==(String &s1, String &s2)
{
  String temp;
  // temp.length = s1.length + s2.length;
  delete temp.str;
  // temp.str = new char[temp.length + 1];
  // strcpy(temp.str, s1.str);
  // strcat(temp.str, s2.str);
  if (strcmp(s1.str, s2.str) == 0)
    cout << "both strings are equal\n";
  else
    cout << "Different strings\n";
  // return temp;
}
int main()
{
  String s1("Ram"), s2("Ram");
  String s3;
  s3 = s1 + s2;
  cout << "s3 is:";
  s1 == s2;
  show(s3);
  // getch();
  return 0;
}
