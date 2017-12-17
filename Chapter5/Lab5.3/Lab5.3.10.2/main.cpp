#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
};
// ...
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
// Save data to members according to limits
    this->id=id;
    if(reserved<0)
        this->reserved=0;
    if(reserved*100/capacity>105)
        this->reserved=105*capacity/100;
    else
        this->reserved=reserved;
    this->capacity=capacity;
}
bool FlightBooking::reserveSeats(int number_ob_seats)
{
// try to add reservations and return 'true' on success
// keep the limits in mind

    if((reserved+number_ob_seats)*100/capacity>105)
        return false;
    reserved+=number_ob_seats;
    return true;
}
bool FlightBooking::canceReservations(int number_ob_seats)
{
// try to cancel reservations and return 'true' on success
// keep the limits in mind
    if(reserved<number_ob_seats)
        return false;

        reserved-=number_ob_seats;
    return true;
}
void FlightBooking::printStatus()
{
// print report here
cout<<"Flight "<<id<<" : "<<reserved<<"\\"<<capacity<<" ("<<reserved*100/capacity<<"%) seats taken"<<endl;
}
int main() {
    int reserved = 0,
    capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    std::string command = "";
    while (command != "quit")
    {
        booking.printStatus();
        std::cout << "What would you like to do?: ";
        getline(cin,command);
        // handle the command
        if(command.find("add")!=-1){
            if(!booking.reserveSeats(atoi(command.substr(command.find(" "),command.find("\n")-command.find(" ")).c_str()))){
                cout<<"Cannot perform this operation"<<endl;
            };
        }
        if(command.find("cancel")!=-1){
            if(!booking.canceReservations(atoi(command.substr(command.find(" "),command.find("\n")-command.find(" ")).c_str()))){
                cout<<"Cannot perform this operation"<<endl;
            };
        }
    }
    return 0;
}
