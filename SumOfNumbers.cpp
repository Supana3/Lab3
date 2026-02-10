#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
    cin >> number;

    while (number >= 0)
    {
        sum = sum + number;
        cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
        cin >> number;
    }
    cout << "The final sum is: " << sum << endl;
    return 0;
}
