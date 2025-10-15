#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter your second number:";
    cin >> b;
    cout << "Enter your third number:";
    cin >> c;
    if (a == b && b == c)
    {
        cout << "All the numbers are equal!";
    }

    else
    {
        if (a > b && a > c)
        {
            cout << "largest:" << a << endl;
        }
        else if (b > a && b > c)
        {
            cout << "largest:" << b << endl;
        }
        else if (c > b && c > a)
        {
            cout << "largest:" << c << endl;
        }

        if (a < b && a < c)
        {
            cout << "Smallest:" << a;
        }
        else if (b < c && b < a)
        {
            cout << "Smallest:" << b << endl;
        }
        else if (c < a && c < b)
        {
            cout << "Smallest:" << c << endl;
        }
    }
    return 0;
}