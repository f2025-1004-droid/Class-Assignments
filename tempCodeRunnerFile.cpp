// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;


int main() {
    string productName1;
     string productName2;
    int total1,total2;
    int quantity1,quantity2;
    int price1,price2;
    cout<<"Enter product name1:";
    getline(cin,productName1);
    cout<<"Enter"<<" "<<productName1<<" "<<"Quantitiy:";
    cin>>quantity1;
    cout<<"Enter"<<" "<<productName1<<" "<<"Price:";
    cin>>price1;
    cout<<"Enter product name2:";
    getline(cin,productName2);
    cout<<"\n";
    cin.ignore();
    cout<<"Enter"<<" "<<productName2<<" "<<"Quantitiy:";
   cin>>quantity2;
    cout<<"Enter"<<" "<<productName2<<" "<<"Price:";
    cin>>price2;
   total1=quantity1*price1;
     total2=quantity2*price2;
     cout<<"Total:"<<" "<<total1<<endl;
          
           cout<<"Total:"<<" "<<total2<<endl;
           cout<<setw(20)<<left<<"Product";
           cout<<setw(20)<<left<<"price";
           cout<<setw(20)<<left<<"Quantity";
           cout<<setw(20)<<left<<"Total";
           cout<<"\n";
           cout<<"------------------------------------------------------------------\n";
          cout<<setw(20)<<left<<productName1;
          
           cout<<setw(20)<<left<<price1;
            cout<<setw(20)<<left<<quantity1;
            cout<<setw(20)<<left<<total1;
            cout<<"\n";
            cout<<"------------------------------------------------------------------\n";
              cout<<setw(20)<<left<<productName2;
               cout<<setw(20)<<left<<price2;
                cout<<setw(20)<<left<<quantity2;
                cout<<setw(20)<<left<<total2;
     
return 0;
    
}