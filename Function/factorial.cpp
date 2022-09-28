#include <iostream>
using namespace std;
int fact(int input)
{

    int i;
    int mul = 1;
    for (i = 1; i <= input; i++)
    {
        mul = mul * i;
    }
    return mul;
}

int main()
{

    int input;
    cin >> input;
    cout << fact(input);
    return 0;
}