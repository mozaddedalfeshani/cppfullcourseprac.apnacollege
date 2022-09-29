// if
// a^2 = b^2 + c^2     ==>> pythogorean

#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int b, c;
    int a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = y;
        c = x;
    }
    if (((a * a) == (b * b + c * c)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythogorean";
    }
    else
    {
        cout << "Not That !";
    }

    return 0;
}