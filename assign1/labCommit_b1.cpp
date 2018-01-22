#include <bits/stdc++.h>
using namespace std;

class pcb{

  int noOfICs;
  static int n;
  float length,width;
  public:
    void count(){
      n++;   
    }

    pcb(float a, float b){
      count();
      length = a;
      width = b;
    }
    ~pcb(){

    }
    static int getCount(){
      return n;
    }
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
    int sameArea(pcb IC2){
      if(this->area() == IC2.area()) return 1;
      else return 0;
    }
};
int pcb::n;
int main(){
  pcb IC1 = pcb(5,2.5);
  pcb IC2 = pcb(5,18.9);
  // IC2;

  // IC1.set(1,5,2.5);
  // IC2.set(1,5,18.9);

  IC1.show();
  IC2.show();

  if(IC1.sameArea(IC2)) cout << "\nBoth ICs have same area\n";
  else cout << "\nDifferent area\n";

  cout << "Number of objects created are " << IC1.getCount() << endl;
  return 0;
}
