#include <iostream>
using namespace std;
int main()
{

    // variable declaration

    int input;
    int i, j;
    bool detect = false;

    // taking Input from User

    cin >> input;

    // loop start for cheaking number

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
    if (detect == true)
    {
        cout << " It's Not prime" << endl;
    }
    else
    {
        cout << "Its prime number:" << endl;
    }

    return 0;
}

/*

adding header file must
#include <math.h>
 for (i = 2; i < sqrt(input); i++)

you can use also this style for more agrechieve style follow


 */
