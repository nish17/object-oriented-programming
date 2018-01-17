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
      cout << "No of ICs in PCB: " << noOfICs << endl;
      cout << "\nperimeter of IC: " << perimeter() << endl;
      cout << "\nArea of IC: " << area() << endl;
    }
    /*
    * returns true if both objects (ICs) have same area 
    */
    int sameArea(pcb IC1, pcb IC2){
      if(IC1.area() == IC2.area()) return 1;
      else return 0;
    }
};

int main(){
  pcb IC1, IC2, IC3;

  IC1.set(1,5,2.5);
  IC2.set(1,5,18.9);

  IC1.show();
  IC2.show();

  if(IC3.sameArea(IC1,IC2)) cout << "\nBoth ICs have same area\n";
  else cout << "\nDifferent area\n";


  return 0;
}