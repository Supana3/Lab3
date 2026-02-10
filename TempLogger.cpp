#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile;
    int days;
    double temp;

    outFile.open("temperatures.txt"); // this opens the txt file
    cout << "How many days of temperatures would you like to record? ";
    cin >> days; // input to the user

    for (int i = 1; i <= days; i++) // loops till i less than equal to days ( user input ) 
    {
        cout << "Enter temperature for Day " << i << ": ";
        cin >> temp;
        outFile << temp << endl;
    }
    outFile.close();
    return 0;
}
