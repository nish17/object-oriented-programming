#include <bits/stdc++.h>
using namespace std;

class pcb{

  int noOfICs;
  float length,width;
  public:
    /*
    * sets the input values
    */
    void set(int x, float y,float z){
      noOfICs = x;
      length = y;
      width = z;
    }
    /*
    * returns perimeter of IC
    */
    float perimeter(){
      return (2*(length+width));
    }
    /*
    * returns area of IC
    */
    float area(){
      return length*width;
    }
    /*
    * prints all the data to the console.
    */
    void show(){
      cout << "No of ICs in PCB " << noOfICs << endl;
      cout << "perimeter of IC" << perimeter() << endl;
      cout << "Area of IC" << area() << endl;
    }

};

int main(){
  pcb IC1, IC2;

  IC1.set(1,5,2.5);
  IC2.set(1,5,18.9);

  IC1.show();
  IC2.show();

  return 0;
}