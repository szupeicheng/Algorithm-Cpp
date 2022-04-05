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
    void myMethod_7e();    // Method/function declaration
    void myMethod_3e();    // Method/function declaration
    void myMethod_2e();    // Method/function declaration
    void myMethod_6e();
    void myMethod_8e();

};

// Method/function definition outside the class
void mybox::myMethod_7e() {
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
                    if (*ptr == 'e') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u0113" ;
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
void mybox::myMethod_3e() {
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
                    if (*ptr == 'e') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00E8" ;
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
void mybox::myMethod_2e() {
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
                    if (*ptr == 'e') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00E9" ;
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
void mybox::myMethod_6e() {
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
                    if (*ptr == 'e') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00EA" ;
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
void mybox::myMethod_8e() {
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
            ptr++;
            if (*ptr == 'p') {
                ptr++;
                if (*ptr == 'e') {
                    ptr++;
                    if (*ptr == 'h') {
                        ptr++;
                        if (*ptr == 'i') {
                            ptr++;
                            if (*ptr == 'n') {
                               ptr++;
                               if (*ptr == '{') {
				  ptr++;
				  if (*ptr == '\\') {
				     ptr++;
				     if (*ptr == 'e') {
				        ptr++;
				        if (*ptr == '}') {
                                           MyWriteFile << "e\\u030D" ;
                                           ptr++;
                                           //no case in else {MyWriteFile << "\\pehin{" << *ptr << "}" ;}
					    } else {MyWriteFile << "\\pehin{\\" << *ptr ; }
					} else {MyWriteFile << "\\pehin{\\" ; }
				    } else {MyWriteFile << "\\pehin{" ; }
			        } else {MyWriteFile << "\\pehin" ; }
			    } else {MyWriteFile << "\\pehi" ; }
                        } else {MyWriteFile << "\\peh" ; }
                    } else {MyWriteFile << "\\pe" ; }
                } else {MyWriteFile << "\\p" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

#endif
