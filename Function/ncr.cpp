#include <iostream>
using namespace std;
// fuction
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
void ncr(int input, int r)
{

    int ans = fact(input) / (fact(input - r) * r);

    cout << ans << endl;
    return;
}
int main()
{
    int input;
    int r;
    cin >> input >> r;
    ncr(input, r);

    return 0;
}