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
    void myMethod_7o();    // Method/function declaration
    void myMethod_3o();    // Method/function declaration
    void myMethod_2o();    // Method/function declaration
    void myMethod_6o();
    void myMethod_8();
    void myMethod_oo();

};

// Method/function definition outside the class
void mybox::myMethod_7o() {
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
                    if (*ptr == 'o') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u014D" ;
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
void mybox::myMethod_3o() {
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
                    if (*ptr == 'o') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00F2" ;
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
void mybox::myMethod_2o() {
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
                    if (*ptr == 'o') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00F3" ;
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
void mybox::myMethod_6o() {
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
                //MyWriteFile << "^" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'o') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00F4" ;
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
void mybox::myMethod_8() {
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
            if (*ptr == 'p') {
                //MyWriteFile << "^" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'o') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "o\\u030D" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\p{" << *ptr ; }
                    } else {MyWriteFile << "\\p{" ; }
                } else {MyWriteFile << "\\p" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_oo() {
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
                if (*ptr == 'd') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 't') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == 'r') {
                            //MyWriteFile << "}" ;
                            ptr++;
                            if ( *ptr == '}') {
                                MyWriteFile << "\\u0358\\u0020" ;
                                ptr++;
                            } else {MyWriteFile << "{\\dtr" << *ptr ; }
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "{\\dt" << *ptr ; }
                    } else {MyWriteFile << "{\\d" ; }
                } else {MyWriteFile << "{\\" ; }
            } else {MyWriteFile << "{" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}


#endif
