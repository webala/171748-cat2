#include <iostream>
#include <string>
using namespace std;


//This function dispays the menu
void showMenu() {
    cout << "\n\nChoose an option" << endl;
   cout << "1. Go to About us" << endl;
   cout << "2. Go to Services page" << endl;
   cout << "3. Go to Full Profile page" << endl;
   cout << "4. Logout" << endl;
}

int main() {

   //Set the username and password
  string username = "username";
  string password = "password";

  //Define the inputs
  string usernameInput, passwordInput;
   cout << "Enter the username " << endl;
   cin >> usernameInput;
   cout << "Enter the password " << endl;
   cin >> passwordInput;
   bool loggedIn = false;

//Check if username and passwor is correct, if correct, log in the user
   if (username == usernameInput && password == passwordInput) {
      loggedIn = true;

      // Continue looping until user selects 4 to log out
      while (loggedIn) {
         showMenu();
         int userSelection;
         cin >> userSelection;

         //Use a switch case to display the various pages
         switch (userSelection)
         {
         case 1:
            /* code */
            cout << "My name is Daniel Webala. I like C++ because it gives me headaches. \n"; 
            break;
         case 2:
            /* code */
            cout << "I can offer web development services for a reasonable fee.\n"; 
            break;
         case 3:
            /* code */
            cout << "My name is Daniel Webala. \n"; 
            cout << "DOB: 30/07/2000. \n";
            cout << "Country: Kenya. \n";
            cout << "Citizenship: Kenyan. \n";
            cout << "City: Nairobi. \n";
            cout << "University: Strathmore. \n";
            cout << "Course: BBIT. \n";
            cout << "Unit: Intro to programmig. \n";
            cout << "Hobby: Singing. \n";
            break;
         case 4:
            /* code */
            loggedIn = false;
            cout << "Logout Successfull \n"; 
            break;
         default:
            break;
         }
      }
   } else {
      cout << "Wrong username or password" << endl;
   }
}
