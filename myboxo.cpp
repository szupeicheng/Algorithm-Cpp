#include "myboxo.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  //myObj.myNum = 15;
  myObj.myString = "filename-na.txt";
  myObj.myString_o="filename-7o.txt";

  // Print macron values
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_7o();  // Call the method

  myObj.myString = "filename-7o.txt";
  myObj.myString_o="filename-3o.txt";

  // Print grave values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_3o();  // Call the method

  myObj.myString = "filename-3o.txt";
  myObj.myString_o="filename-2o.txt";

  // Print acute values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_2o();  // Call the method

  myObj.myString = "filename-2o.txt";
  myObj.myString_o="filename-6o.txt";

  // Print caret values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_6o();  // Call the method

  myObj.myString = "filename-6o.txt";
  myObj.myString_o="filename-oo.txt";

  // Print caret values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_oo();  // Call the method

  return 0;
}
