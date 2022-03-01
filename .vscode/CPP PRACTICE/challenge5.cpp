#include<iostream>
using namespace std;

int main()
{cout <<"welcome to the aman carpet cleaning service!!"<<endl<<endl;
    double price_per_room{30};
    double tax_rate{0.06};
    int validity{30};
    cout<<"enter the number of rooms"<<endl;
    int rooms{0};
    cin>>rooms;
    cout<<"the number of rooms entered are "<<rooms<<endl;
    cout<<"the price per rooms is "<< 30<<" $"<<endl;
    cout<<"the cost is "<<rooms*price_per_room <<" $"<<endl;
    cout<<"the tax  is "<<rooms*price_per_room*tax_rate<<" $"<<endl;
    cout<<"the total estimate is "<<(rooms*price_per_room*tax_rate)+(rooms*price_per_room)<<" $"<<endl;
    cout<<"the total time reqired for the specific work is "<< validity<<" days!!"<<endl;
     return 0;
}