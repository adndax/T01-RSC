#include <iostream>
#include <string>
using namespace std;

class Contact {

    public:
        // constructor default
        Contact(string contact_name = "", string contact_residence = "", string contact_address = "", string contact_power = "")
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
            if (add_count < 8) {
                contacts[add_count] = Contact(contact_name, contact_residence, contact_power, contact_address);
            }
            else {
                contacts[add_count % 8]  = Contact(contact_name, contact_residence, contact_address, contact_power);
                cout << "PhoneBook is Full. Oldest contact replaced." << endl;
            }
            add_count++;
            cout << "Contact added succesfully!" << endl;
        }

        // function to display all contacts
        void displayAllContacts() const {
            if (add_count == 0) {
                cout << "PhoneBook still empty. Add contact first!" << endl;
                return;
            }
            int contact_size;
            if (add_count < 8) {
                contact_size = add_count;
            }
            else {
                contact_size = 8;
            }
            cout << "List of Contacts:" << endl;
            for (int i = 0; i < contact_size; i++) {
                cout << contacts[i].getContactName() + "\n" << endl;
            }
        }

        // function to search a contact detail by name
        void searchContact(const string& contact_name) const {
            int contact_size;
            if (add_count < 8) {
                contact_size = add_count;
            }
            else {
                contact_size = 8;
            }
            for (int i = 0; i < contact_size; i++) {
                if (contacts[i].getContactName() == contact_name) {
                    cout << contacts[i].getContactDetailByName(contact_name) << endl;
                    return;
                }
            }
            cout << "Contact not found." << endl;
        }

        // function to remove saved data
        void clearContacts() {
            int contact_size;
            if (add_count < 8) {
                contact_size = add_count;
            }
            else {
                contact_size = 8;
            }
            for (int i = 0; i < contact_size; i++) {
                contacts[i] = Contact();
            }

            contact_size = 0;
            add_count = 0;
            cout << "All saved contacts have been removed." << endl;
        }

    private:
        Contact contacts[8];
        int add_count;
};