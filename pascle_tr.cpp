#include <iostream>
using namespace std;

int func(int input)
{
    int fact = 1;
    for (int i = 2; i <= input; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()

{
    int input;

    short int i, j;
    int value;
    cout << "Enter Number:: " << endl;
    cin >> input;
    for (i = 0; i < input; i++)
    {

        for (int k = 0; k <= i; k++)
        {
            value = func(i) / (func(i - k) * func(k));
            cout << value;
        }
        cout << endl;
    }

    return 0;
}