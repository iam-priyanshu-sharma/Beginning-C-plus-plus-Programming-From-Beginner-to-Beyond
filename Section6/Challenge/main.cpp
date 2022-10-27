
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    cout <<"Hello, welcome to Frank's Carpet Cleaning Service."<<endl;
    
    cout <<"How many small rooms would you like to clean? ";
    int small_room{0};
    cin >> small_room;
    
    cout <<"How many large rooms would you like to clean? ";
    int large_room;
    cin >>large_room;
    
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double sales_tax {0.066};
    const int estimate_expiry {30}; //days
    
    cout <<"Estimate for carpet cleaning service."<<endl;
    cout <<"Number of small rooms: "<<small_room<<endl;
    cout <<"Number of large rooms: "<<large_room<<endl;
    
    cout <<"Price per small room: $"<<price_per_small_room<<endl;
    cout <<"Price per large room: $"<<price_per_large_room<<endl;
    
    cout <<"Cost: $"<<(price_per_small_room*small_room)+(price_per_large_room*large_room)<<endl;
    
    cout <<"Tax: $"<<((price_per_small_room*small_room)+(price_per_large_room*large_room))*sales_tax<<endl;
    
    cout <<"======================================"<<endl;
    cout <<"Total estimate: $"<<((price_per_small_room*small_room)+(price_per_large_room*large_room))+(((price_per_small_room*small_room)+(price_per_large_room*large_room))*sales_tax)<<endl;
    
    cout <<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;
    
    cout <<endl;
    return 0;
}

