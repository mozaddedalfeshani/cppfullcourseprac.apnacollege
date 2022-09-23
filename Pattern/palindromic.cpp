#include <iostream>
using namespace std;
int main()
{
    int row, col, input, temp, temp2;
    cin >> input;
    int space = input - 1;

    for (row = 1; row <= input; row++)
    {

        // starting column

        // space print
        for (temp = 1; temp <= space; temp++)
        {
            cout << " ";
        }

        // decreasing num
        for (int k = row; k > 1; k--)
        {
            cout << k;
        }
        // incresing part
        for (int l = 1; l <= row; l++)
        {
            cout << l;
        }

                // space minising
        space--;
        // newline

        cout << endl;
    }

    return 0;
}