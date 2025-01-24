#include <iostream>
#include <string>
using namespace std;

class Contact {
    public:
        // constructor
        Contact(string contact_name, string contact_residence, string contact_address, string contact_power)
            : name(contact_name), residence(contact_residence), address(contact_address), power(contact_power) {}
        // function to get contact detail
        string getContactDetail() const {
            return "Name: " + name + "\nResidence: " + residence + "\nAddress: " + address + "\nPower: " + power;
        }
    private:
        string name;
        string residence;
        string address;
        string power;
};