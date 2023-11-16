#include <iostream>
using namespace std;

int main() {

   //Initialize a character value variable
   char value;
   cout << "Enter a character value";
   //Input the value
   cin >> value;
    //Store a list of vowels
    char vowels[] = {'a', 'b', 'c', 'd', 'e'};
    
   for (int i = 0; i < 5; i++) {
      if (vowels[i] == tolower(value) && isalpha(value)) {
         cout << value << " is a vowel";
      }
   }
    return 0;

   //  char val = tolower('A');
}
