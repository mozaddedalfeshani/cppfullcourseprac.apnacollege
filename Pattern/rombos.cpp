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
        // spaces
        for (
            int s = 1;
            s <= space; s++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {

            // star
            cout << "* ";
        }
        cout << endl;
        space = space - 1;
    }
    return 0;
}