
/*
Given three floating-point numbers x, y, and z, output xz, xyz, the absolute value of y, and the square root of (xy)z.

Ex: If the input is:

5.0 6.5 3.2
the output is:

172.466 1.29951e+279 6.5 262.43

*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   cin >> x;
   cin >> y;
   cin >> z;
   
   cout << pow(x, z) << " ";
   cout << pow(x, pow(y, z)) << " ";
   cout << fabs(y) << " ";
   cout << sqrt(pow(x * y, z)) << endl;
   
   return 0;
}
