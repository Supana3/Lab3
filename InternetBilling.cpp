#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char package; // this creates a variable which stores characters
    double hours; // decimals
    double bill = 0.0;

    cout << "Select a subscription package (A, B, or C): ";
    cin >> package;     // this user for package choice

    // this ask user for hours used
    cout << "Enter the number of hours used: ";
    cin >> hours;

    // this checks if package choice is valid and that the user hasn't put anything out of the option 
    if (package != 'A' && package != 'a' && package != 'B' && package != 'b' && package != 'C' && package != 'c') {
        cout << "Invalid package choice. Please run the program again." << endl;
        return 0;
    }

    // this checks if hours are valid
    if (hours < 0 || hours > 744) {
        cout << "Invalid number of hours. Please run the program again." << endl;
        return 0;
    }

    // this is for package A
    if (package == 'A' || package == 'a') {
        bill = 9.95;

        if (hours > 10) {
            bill = bill + (hours - 10) * 2.00;
        }
    }

    // this is for package B
    else if (package == 'B' || package == 'b') {
        bill = 14.95;

        if (hours > 20) {
            bill = bill + (hours - 20) * 1.00;
        }
    }

    // this is for package C
    else {
        bill = 19.95;
    }

    // print the final bill
    cout << fixed << setprecision(2);
    cout << "Your total amount due is: $" << bill << endl;
    return 0;
}
