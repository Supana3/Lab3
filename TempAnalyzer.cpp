#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    double temp;
    double sum = 0.0;
    int count = 0;

    inFile.open("temperatures.txt"); // runs the .txt file

    while (inFile >> temp)
    {
        sum += temp;
        count++;
    }
    inFile.close(); // this closes the file

    if (count > 0)
    { // calculation
        double average = sum / count;
        cout << "Temperatures analyzed for " << count << " days." << endl;
        cout << fixed << setprecision(1);
        cout << "The average temperature was: " << average << endl;
    }
    return 0;
}
