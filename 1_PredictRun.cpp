/*
Write a program that reads integers userNum and divNum as input, and outputs userNum divided by divNum three times. Note: End with a newline.

Ex: If the input is:

2000 2
the output is:

1000 500 250
Note: In C++, integer division discards fractions. Ex: 6 / 4 is 1 (the 0.5 is discarded).

This program reads some number (a numberator and a denominator), and then divides three times starting with the numerator and denonimator.
It then stores that number and divides again (and again)
*/

#include <iostream>
using namespace std;

int main() {
   int userNum;
   int divNum;
   
   cout << "Please enter your starting numerator and denominator: ";
   cin >> userNum;
   cin >> divNum;
   
   //noticed how userNum is first entered by the user, but then it is used here to store the result of the first operation
   userNum = userNum / divNum;
   cout << userNum;
   
   //the same happens here, just with a second quotient
   userNum = userNum / divNum;
   cout << " " << userNum;
   
   userNum = userNum / divNum;
   cout << " " << userNum;
   
   cout << endl;

   return 0;
}
