#include <bits/stdc++.h>
using namespace std;

class PCB
{
  int noOfICs;
  static int n;
  float length, width;

public:
  /*
  * increments the static variable 
  * this function is placed inside both constructors
  * it will be called everytime new object is created with or without arguments
  */
  void incCount()
  {
    n++;
  }
  // void decCount()
  // {
  //   n--;
  // }
  /*
  * Static Variable, here its used for counting number of objects
  */
  static int getCount()
  {
    return n;
  }
  /*
  * Default constructor, sets the value of length and width to 1
  * this constructor gets called when no parameters are passed while creating the object
  */
  PCB()
  {
    incCount();
    length = 1;
    width = 1;
  }
  /*
  * This Constructor sets the value to the data members if values are passed while creating the objects 
  */
  PCB(float a, float b)
  {
    incCount();
    length = a;
    width = b;
  }
  /*
  * Default Destructor
  */
  ~PCB()
  {
    // decCount();
    cout << getCount() << " Objects destroyed\n";
  }
  /*
  * returns perimeter of IC
  */
  float perimeter()
  {
    return (2 * (length + width));
  }
  /*
    * returns area of IC
    */
  float area()
  {
    return length * width;
  }
  /*
    * prints all the data to the console.
    */
  void show()
  {
    cout << "\nNo of ICs in PCB: " << getCount() << endl;
    cout << "\nLength of IC " << length << endl;
    cout << "\nwidth of IC " << width << endl;
    cout << "\nperimeter of IC: " << perimeter() << endl;
    cout << "\nArea of IC: " << area() << endl;
  }
  /*
    * returns true if both objects (ICs) have same area 
    */
  int sameArea(PCB IC2)
  {
    if (this->area() == IC2.area())
      return 1;
    else
      return 0;
  }
};
/*
* Declaration for the static variable
*/
int PCB::n;

int main()
{
  PCB IC1 = PCB(5, 2.5);
  PCB IC2 = PCB(5, 18.9);
  // IC2;
  PCB IC3 = PCB();
  // IC1.set(1,5,2.5);
  // IC2.set(1,5,18.9);

  IC1.show();
  IC2.show();

  /*
  * Assign2:QD 
  * if IC4 object stays inside of the scope block, 
  * then it doesnt get destroyed by the destructor,
  * FOR the destructor to work properly, 
  * Comment the paraenthesis below (take IC4 object out)  
  */
  {
    PCB IC4;
  }

  // IC4.show(); this object isnot accessible, because its inside the scope

  if (IC1.sameArea(IC2))
    cout << "\nBoth ICs have same area\n";
  else
    cout << "\nDifferent area\n";

  cout << "\nNumber of objects created: " << IC1.getCount() << endl;
  return 0;
}
