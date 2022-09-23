#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int n;
    cin >> n;
    int temp = n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= temp; col++)
        {
            cout << col;
        }
        cout << endl;
        temp--;
    }
    return 0;
}
