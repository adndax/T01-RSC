#include <iostream>
#include <string>
using namespace std;

class Contact {

    public:
        // constructor
        Contact(string contact_name, string contact_residence, string contact_address, string contact_power)
            : name(contact_name), residence(contact_residence), address(contact_address), power(contact_power) {}

        // function to get contact name 
        string getContactName() const {
            return name;
        }

        // function to get contact detail
        string getContactDetailByName(const string& contact_name) const {
            if (name == contact_name) {
                return "Name: " + name + "\nResidence: " + residence + "\nAddress: " + address + "\nPower: " + power;
            }
            return "Contact not found.";
        }

    private:
        string name;
        string residence;
        string address;
        string power;
};

class PhoneBook {

    public:
        // constructor
        PhoneBook() : add_count(0) {}

        // function to add new contact
        void addContact(const string& contact_name, const string& contact_residence, const string& contact_address, const string& contact_power) {
            if (add_count <= 7) {
                contacts[add_count] = Contact(contact_name, contact_residence, contact_power, contact_address);
            }
            else {
                contacts[add_count % 8]  = Contact(contact_name, contact_residence, contact_address, contact_power);
                cout << "PhoneBook is Full. Oldest contact replaced." << endl;
            }
            add_count++;
            cout << "Contact added succesfully!" << endl;
        }

    private:
        Contact contacts[8];
        int add_count;
};