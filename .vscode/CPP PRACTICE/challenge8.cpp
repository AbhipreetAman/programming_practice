//welcome to currency exchange program
//same program can be done by using mod operator
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the amount in cents: ";
    int cents;
    cin>>cents;
    cout<<"You can provide the change as follows "<<endl;
    const int dollar_val{100};
    const int quarter_val{25};
    const int dime_val{10};//fixed values
    const int nickel_val{5};
    const int penny_val{1};
    int balance{},dollar{},quarter{},dime{},nickel{},penny{};

    dollar=(cents/dollar_val);
    balance=cents-dollar*dollar_val;
    cout<<"Dollar: "<<dollar<<endl;

    quarter=balance/quarter_val;
    balance-=quarter*quarter_val;
    cout<<"Quarter: "<<quarter<<endl; 

    dime=balance/dime_val;
    balance-=dime*dime_val;
    cout<<"Dime: "<<dime<<endl;

    nickel=balance/nickel_val;
    balance-=nickel*nickel_val;
    cout<<"Nickel: "<<nickel<<endl;

    balance-=penny*penny_val;
    cout<<"Penny: "<<balance<<endl;
 
    return 0;

}