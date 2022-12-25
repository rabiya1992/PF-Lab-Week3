#include <iostream>
using namespace std;

main()
{float megabyte;
 float input;
 float convert;
 float kB;
 float B;
 megabyte = 1024;
 kB = 1024 ;
 B = 8;
 cout << "Enter mb: ";
 cin >> input;
 convert = input*megabyte*kB*B;
 cout << "To convert ";
 cout << convert; 
}