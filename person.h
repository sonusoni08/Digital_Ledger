#include <bits/stdc++.h>
// #include "validation2.h"
#include <conio.h>
using namespace std;

class person {
    public:
    char name[30];
    char phoneNo[18];
    double amount;
    bool getData();
    void insertData(string, string, double);
    void copyData(person);
};

bool person :: getData() {
    string Name, PhoneNo;
    cout << "\n\nEnter Name : ";
    while (true) {
        char ch = getch();
        if ((ch >= 'a' && ch <= 'z') || ch == ' ' || (ch >= '0' && ch <= '9')) {
            Name.push_back(ch);
            cout << ch; 
        }
        else if (ch == '\r' && Name.length() >= 1) break;
        else if (ch == '\r') continue;
        else if (ch == '\b' && Name.length() >= 1){
            cout << "\b \b";
            Name.pop_back();
            continue;
        }
    }
    cout << "\n";
    
    cout << "Enter Phone Number : ";
    fflush(stdin);
    getline(cin, PhoneNo);
    strcpy(this->name, Name.c_str());
    strcpy(this->phoneNo, PhoneNo.c_str());
    this->amount = 0;
    return true;
}

void person :: insertData(string Name, string PhoneNo, double Amount) {
    strcpy(this->name, Name.c_str());
    strcpy(this->phoneNo, PhoneNo.c_str());
    this->amount = Amount;
}

void person :: copyData(person data) {
    strcpy(this->name, data.name);
    strcpy(this->phoneNo, data.phoneNo);
    this->amount = data.amount;
}