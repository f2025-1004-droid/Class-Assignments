#include<iostream>
#include<string>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter your Obtained marks:";
cin>>a;
cout<<"Enter your total marks:";
cin>>b;
c=(a/b)*100;
if(c>=90){
    cout<<"your perntage is:"<<c<<" "<<"Grade :A"<<endl;
}
else if(c>=80)
{
    cout<<"Your percentage :"<<c<<" "<<"Grade :B"<<endl;

}
else if (c>=70)
{
cout<<"Your percentage:"<<c<<" "<<"Grade:C"<<endl;
}
else if (c>=60)
{
cout<<"your percentage:"<<c<<" "<<"Grade :D"<<endl;
}
else
{
    cout<<"Your are faild my dear .Do not loss hope "<<endl;
}
return 0;



}