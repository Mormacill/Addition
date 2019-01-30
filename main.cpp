#include <iostream>
#include "add.h"
using namespace std; 

int main ()
{
int a,b,z;
cout << "Please enter to numbers which will be summed!" << endl;
cout << "Number one: " << endl;
cin >> a;
cout << "Number two: " << endl;
cin >> b;
z = add (a,b);
cout << "The result is " << z << endl;
}

