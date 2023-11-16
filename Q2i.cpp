#include <iostream>
using namespace std;

int main() {

   //Initialize a number limit variable
   int limit;
    //Get the limit from the user
    cout << "Enter a number limit to check the prime numbers: \n";
    cin >> limit;

   cout << "The prime numbers upto " << limit << " are:\n";
   for (int j = 0; j <= limit; j++) {
      if (j <= 1) {
        cout << j << endl;
      } else {
 // Check for divisibility from 2 to the square root of n
      for (int i = 2; i * i <= j; ++i) {
               if (j % i == 0) {
                     return false;  // Not a prime number
               }
            }
         }

   

    return true;  
   }
   
   
    return 0;
}
