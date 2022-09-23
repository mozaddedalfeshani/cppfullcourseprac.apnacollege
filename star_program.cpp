
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;
int main()
{
    int row, input, space2, temp, temp1, space;

    cin >> input;
    space = input - 1;
    int temp2 = input + 1;
    for (row = 1; row <= input; row++)
    {
        // starting column

        // space print
        for (temp = 1; temp <= space; temp++)
        {
            cout << " ";
        }

        for (int i = 1; i <= row; i++)
        {
            cout << "* ";
        }

        cout << endl;
        space--;
    }
    // down star

    for (row = 1; row <= input; row++)
    {
        // space
        for (temp1 = 1; temp1 < row; temp1++)
        {
            cout << " ";
        }
        for (int k = 1; k <= temp2 - row; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}