#include <iostream>
using namespace std;

int main() {

   //Initialize year variable
   int year;
    //Get the year from the user
    cout << "Enter a year to check if it is a leap year: \n";
    cin >> year;

   // Check if its a leap year. (Divisible by 4)
   bool isLeapYear = year % 4 == 0;

   isLeapYear ? cout << year << " is a leap year \n" : cout << year << " is not a leap year \n";
   
    return 0;
}
