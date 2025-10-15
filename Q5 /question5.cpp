// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 1st number:";
    cin >> num1;
    cout << "Enter 2nd number:";
    cin >> num2;
    num1 = num1 + num2;

    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "The value of 1st number after swap:" << num1 << endl;
    cout << "The value of 2nd number after swip:" << num2 << endl;

    return 0;
}