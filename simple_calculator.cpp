#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num1;
    int num2;
    int sum;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter your second number:";
    cin>>num2;
    
    sum=num1+num2;
    cout<<"The sum of two numbers is:\t"<<sum<<endl;
     int difference;
     difference=num1-num2;
     cout<<"The difference of two numbers is:\t"<<difference<<endl;
     
     int product;
     product=num1*num2;
     cout<<"The product of two numbers is :\t"<<product<<endl;
     int quotient;
     quotient=num1/num2;
     cout<<"the quotent of two numbers is :\t"<<quotient<<endl;
     string gmail;
     cout<<"enter your gmail:";
     getline(cin,gmail);
    
    return 0;
}