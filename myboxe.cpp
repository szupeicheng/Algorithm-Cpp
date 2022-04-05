#include "myboxe.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  // Print macron values
  //myObj.myNum = 15;
  myObj.myString = "filename-6i.txt";
  myObj.myString_o="filename-7e.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_7e();  // Call the method


  // Print grave values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-7e.txt";
  myObj.myString_o="filename-3e.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_3e();  // Call the method

  // Print acute values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-3e.txt";
  myObj.myString_o="filename-2e.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_2e();  // Call the method

  // Print caret values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-2e.txt";
  myObj.myString_o="filename-6e.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_6e();  // Call the method

  //myObj.myString = "filename-6e.txt";
  //myObj.myString_o="filename-8e.txt";
  //cout << myObj.myNum << "\n";
  //cout << myObj.myString << "\n";
  //cout << myObj.myString_o << "\n";
  //myObj.myMethod_8e();  // Call the method

  return 0;
}
