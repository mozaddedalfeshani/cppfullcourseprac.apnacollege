#include <iostream>
using namespace std;
int main()
{
    int n;

    int i, j;

    cin >> n;
    int sum;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}