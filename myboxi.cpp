#include "myboxi.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  //myObj.myNum = 15;
  myObj.myString = "filename-8i.txt";
  myObj.myString_o="filename-3i.txt";

  // Print values
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_3i();  // Call the method

  // Print values
  myObj.myString = "filename-3i.txt";
  myObj.myString_o="filename-2i.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_2i();  // Call the method

  // Print values
  myObj.myString = "filename-2i.txt";
  myObj.myString_o="filename-6i.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_6i();  // Call the method

  //myObj.myString = "filename-8o.txt";
  //myObj.myString_o="filename-8i.txt";
  //cout << myObj.myString << "\n";
  //cout << myObj.myString_o << "\n";
  //myObj.myMethod_8i();  // Call the method

  return 0;
}
