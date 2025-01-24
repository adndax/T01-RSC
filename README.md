# Mr. Bell’s PhoneBook

Welcome to **Mr. Bell’s PhoneBook**! This is a simple command-line application built with C++ that allows you to manage a phonebook using Object-Oriented Programming (OOP) principles. With this application, you can add, search, display, and clear contacts in an interactive and intuitive way.

## Features

### 1. Add Contacts
- Add up to **8 contacts** to the phonebook.
- Automatically replaces the **oldest contact** if the phonebook is full.
- Validates all input fields (**name, residence, address, power**) to ensure they are not empty.

### 2. Search Contacts
- View all saved contacts.
- Search for a specific contact by name and display its details.

### 3. Clear Contacts
- Remove all saved contacts from the phonebook with a single command.

## Requirements

1. **C++ Compiler**:
   - `g++` (GCC) or `clang++`.

2. **Supported Terminal**:
   - A terminal that supports **ANSI escape codes** for colored text (e.g., Linux, macOS, or Windows Terminal).

## How to Run

### 1. Compile the Program
Use a C++ compiler such as `g++` or `clang++` to compile the program. For example:

```bash
g++ -o phonebook phonebook.cpp
```

### 2. Run the Program
Execute the compiled program:

```bash
./phonebook
```

## Commands and Usage

### 1. **ADD**
- Add a new contact to the phonebook.
- The program will prompt you to enter the following details:
  - Name
  - Residence
  - Address
  - Power

### 2. **SEARCH**
- Displays all saved contacts.
- Search for a specific contact by entering its name.
- If the contact is found, its details will be displayed. Otherwise, an error message will appear.

### 3. **EXIT**
- Clears all saved contacts.
- Exits the program.
