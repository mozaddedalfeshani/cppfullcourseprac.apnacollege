#include <iostream>
using namespace std;
int detect(int init)
{

    bool detector = true;

    for (int i = 2; i < init; i++)
    {
        if (init % i == 0)
        {
            detector = true;
            break;
        }
        else
        {
            detector = false;
        }
    }
    return detector;
}
int main()
{
    int first;
    int last;
    cin >> first >> last;
    for (int k = first; k <= last; k++)
    {
        if (detect(k) == false)
        {
            cout << k << endl;
        }
        first++;
    }

    return 0;
}