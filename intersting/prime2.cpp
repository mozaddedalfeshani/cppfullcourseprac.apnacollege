// here we will print prime number between 2 numbers whice will user input

// so start

#include <iostream>
using namespace std;
int prime(int init, int last)
{
    bool detect = false;
    for (int i = init; i < last; i++)
    {
        for (int j = i + 1; j < last; j++)
        {
            if (i % j == 0)
            {
                detect = true;
            }
            else
            {
                detect = false;
            }
        }
    }
    return detect;
}
int main()
{
    bool detect;
    int i;

    int input1, input2;
    cin >> input1 >> input2;
    if (prime(input1, input2) == true)
    {
        cout << i << " is not prime" << endl;
    }
    else
    {
        cout << " It's Prime" << endl;
    }
}