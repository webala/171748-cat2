#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    bool num1isSmallest = num1 < num2 && num1 < num3;

    // Using switch case to determine the smallest number
    switch (1) {
        case (num1 < num2 && num1 < num3):
            cout << "The smallest number is: " << num1 << endl;
            break;
        case (num2 < num1 && num2 < num3):
            cout << "The smallest number is: " << num2 << endl;
            break;
        case (num3 < num1 && num3 < num2):
            cout << "The smallest number is: " << num3 << endl;
            break;
        default:
            cout << "Invalid input or numbers are equal." << endl;
            break;
    }

    return 0;
}
