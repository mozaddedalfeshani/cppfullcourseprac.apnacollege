#include <iostream>
using namespace std;
int main()
{

    int n;
    int i, j;
    cin >> n;
    int space = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (
            int s = 1;
            s <= space; s++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        space--;
    }
    return 0;
}