#include <iostream>
#include "op.h"
using namespace std; 

int main ()
{
int q,a,b,z;

cout << "1: add" << endl;
cout << "2: sub" << endl;
cout << "3: div" << endl;
cout << "4: mul" << endl;

cin >> q;

	if (q == 1)
		{
		cout << "Please enter to numbers which will be summed!" << endl;
		cout << "Number one: " << endl;
		cin >> a;
		cout << "Number two: " << endl;
		cin >> b;
		z = add (a,b);
		}

 	if (q == 2)
                {
                cout << "Please enter to numbers which will be subtracted!" << endl;
                cout << "Number one: " << endl;
                cin >> a;
                cout << "Number two: " << endl;
                cin >> b;
                z = sub (a,b);
                }

 	if (q == 3)
                {
                cout << "Please enter to numbers which will be divided!" << endl;
                cout << "Number one: " << endl;
                cin >> a;
                cout << "Number two: " << endl;
                cin >> b;
                z = dive (a,b);
                }

 	if (q == 4)
                {
                cout << "Please enter to numbers which will be multiplied!" << endl;
                cout << "Number one: " << endl;
                cin >> a;
                cout << "Number two: " << endl;
                cin >> b;
                z = mul (a,b);
                }


 
cout << "The result is " << z << endl;
}

