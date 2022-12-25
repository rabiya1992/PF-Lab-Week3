#include <iostream>
using namespace std;

main()
{float matric;
 float fsc;
 float ecat;
 string name;
 float matricper;
 float fscper;
 float ecatper;
 float aggregate;
 cout << "Name: ";
 cin >> name;
 cout << "Enter matric marks: ";
 cin >> matric; 
 cout << "Enter fsc marks: ";
 cin >> fsc;
 cout << "Enter ecat marks: ";
 cin >> ecat;
 matricper = (matric*100/1100)*0.1;
 fscper = (fsc*100/1100)*0.4;
 ecatper = (ecat*100/400)*0.5;
 
 aggregate = matricper+fscper+ecatper;
 cout << "Your aggregate is: ";
 cout << aggregate;
}
   