#include <iostream>
using namespace std;

int loop(int input)
{
    int i;
    bool detect = false;
    for (i = 2; i < input; i++)
    { /// Here you can use an alternative see below
        if (input % i == 0)
        {
            detect = true;
            break;
        }
        else
        {
            detect = false;
        }
    }

    return detect;
}
int main()
{
    int input;
    bool detect;
    cin >> input;

    if (loop(input) == true)
    {
        cout << " It's Not prime" << endl;
    }
    else
    {
        cout << "Its prime number:" << endl;
    }

    return 0;
}