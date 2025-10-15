#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
     float num1;
     float num2;
     float sum;
     cout << "Enter first number:";
     cin >> num1;
     cout << "Enter your second number:";
     cin >> num2;
     cout << std::fixed << std::setprecision(3);

     sum = num1 + num2;
     cout << "The sum of two numbers is:\t" << sum << endl;
     float difference;
     difference = num1 - num2;
     cout << "The difference of two numbers is:\t" << difference << endl;

     float product;
     product = num1 * num2;
     cout << "The product of two numbers is :\t" << product << endl;
     float quotient;
     quotient = num1 / num2;
     cout << "the quotent of two numbers is :\t" << quotient << endl;
     int int1 = static_cast<int>(num1);
     int int2 = static_cast<int>(num2);

     cout << "\n---------------integer values----------------\n";
     cout << "The sum of two numbers is:\t" << (int1 + int2) << endl;
     cout << "The difference of two numbers is:\t" << (int1 - int2) << endl;
     cout << "The product of two numbers is :\t" << (int1 * int2) << endl;
     cout << "the quotent of two numbers is :\t" << (int1 / int2) << endl;

     return 0;
}