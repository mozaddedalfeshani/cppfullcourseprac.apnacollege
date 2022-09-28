#include <iostream>
using namespace std;
void fib(int n)
{
    int i;
    int last = n;
    int sum = 0;
    int t1 = 0;
    int t2 = 1;

    for (i = 1; i <= last; i++)
    {
        cout << t1 << endl;

        sum = t1 + t2;

        t1 = t2;
        t2 = sum;
    }
    return;
}

int main()
{

    int i, j;
    int sum = 0;
    int last;
    cin >> last;
    int temp = 1;
    int t1 = 0;
    int t2 = 1;
    fib(last);
    return 0;
}