#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int input;
    int temp1;
    // input section

    cin >> input;
    int reverse = 0;
    int after = input;

    while (input > 0)
    {
        // getting reminder
        temp1 = input % 10;
        reverse = reverse + pow(temp1, 3);
        input = input / 10;
    }
    if (reverse == after)
    {
        cout << " Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}