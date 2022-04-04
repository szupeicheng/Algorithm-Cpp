#ifndef MYBOX_H
#define MYBOX_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class mybox {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    string myString_o;
    void myMethod_7a();    // Method/function declaration
    void myMethod_3a();    // Method/function declaration
    void myMethod_2a();    // Method/function declaration
    void myMethod_6a();
    void myMethod_na();
    //void myMethod_acuteo();    // Method/function declaration
};

// Method/function definition outside the class
void mybox::myMethod_7a() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '=') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'a') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u0101" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\={" << *ptr ; }
                    } else {MyWriteFile << "\\={" ; }
                } else {MyWriteFile << "\\=" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_3a() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '`') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'a') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00E0" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\`{" << *ptr ; }
                    } else {MyWriteFile << "\\`{" ; }
                } else {MyWriteFile << "\\`" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_2a() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '\'') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'a') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00E1" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\\'{" << *ptr ; }
                    } else {MyWriteFile << "\\\'{" ; }
                } else {MyWriteFile << "\\\'" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_6a() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '^') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'a') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00E2" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\^{" << *ptr ; }
                    } else {MyWriteFile << "\\^{" ; }
                } else {MyWriteFile << "\\^" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_na() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '{') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '\\') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == 'n') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'n') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u207F" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "{\\nn" << *ptr ; }
                    } else {MyWriteFile << "{\\n" ; }
                } else {MyWriteFile << "{\\" ; }
            } else {MyWriteFile << "{" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}


#endif
