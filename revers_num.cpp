#include <iostream>
using namespace std;
int main()
{

    // variable declaration

    int input, i, j, temp1, temp2, reverse = 0;
    int reverge;
    int range = 9;
    // user input

    cin >> input;

    // loop
    while (input > 0)
    {
        // getting reminder
        temp1 = input % 10;
        reverse = reverse * 10 + temp1;
        input = input / 10;
    }
    cout << reverse << endl;

    return 0;
}