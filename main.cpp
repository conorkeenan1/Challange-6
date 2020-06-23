#include <iostream>
using namespace std;

/*Frank’s Carpet Cleaning ServiceCharges
£25 per small room
£35 per large room
Slales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of small rooms they would like cleaned and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: £25
Price per large room: £35
Cost: £110
Tax: £6.6
==================================
Total estimate: £116.60
This estimate is valid for 30 days*/

int main(){

    int number_of_small_rooms;
    int number_of_large_rooms;

    cout << "Welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "How many small rooms would you liked cleaned? ";
    cin >> number_of_small_rooms;
    cout << "How many large rooms would you liked cleaned? ";
    cin >> number_of_large_rooms;

    double price_per_small_room = 25.0;
    double price_per_large_room = 35.0;

    double cost_for_small = number_of_small_rooms * price_per_small_room;
    double cost_for_large = number_of_large_rooms * price_per_large_room;

    double cost = cost_for_small + cost_for_large;

    double tax = 0.06;

    double total = cost + (cost*tax);


    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: " << price_per_small_room << endl;
    cout << "Price per large room: " << price_per_large_room << endl;
    cout << "Cost: " << cost << endl;
    cout << "Tax: " << tax << endl;
    cout << "=====================================" << endl;
    cout << "Total estimate: " << total << endl;
    cout << "This estimate is valid of 30 days.";



}