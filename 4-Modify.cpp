/*
The following equation estimates the average calories burned for a person when exercising, which is based on a scientific journal article (source):

Write a program using inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), respectively. Output the average calories burned for a person.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

49 155 148 60
the output is:

Calories: 736.21 calories
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Calories = ((Age x 0.2757) + (Weight x 0.03295) + (Heart Rate x 1.0781) — 75.4991) x Time / 8.368

int main() {
   double ageYears;
   double weightPounds;
   double heartBPM; // beats per minute
   double timeMinutes;
   double calories = 0;
   
   cout << "Please input the age: ";
   cin >> ageYears;
   cout << "Please input the weight: ";
   cin >> weightPounds;
   cout << "Please input the heartrate: ";
   cin >> heartBPM;
   cout << "Please input the time: ";
   cin >> timeMinutes;


   //update this to use these variables and impliment the formula above and then uncomment it to finish the program!                  
   //calories = 

   cout << fixed << setprecision(2);
   cout << "Calories: " << calories << " calories" << endl;

   return 0;
}


