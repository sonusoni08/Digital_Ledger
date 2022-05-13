#include <bits/stdc++.h>
// #include "validation2.h"
using namespace std;

class record {
    public:
    char date[20];
    char itemName[50];
    char quantity[10];
    double itemPrice;

    void insertData(string a, string b, string c, double);
    void takeInput();

};

void record :: insertData(string a, string b, string c, double d) {
    strcpy(this->date, a.c_str());
    strcpy(this->itemName, b.c_str());
    strcpy(this->quantity, c.c_str());
    this->itemPrice = d;
}

void record :: takeInput() {
    string Date, ItemName, Quantity;
    double ItemPrice;
    cout << "Enter Date : ";
    fflush(stdin);
    getline(cin, Date);
    cout << "Enter Item Name : ";
    getline(cin, ItemName);
    cout << "Enter Quantity : ";
    getline(cin, Quantity);
    cout << "Enter ItemPrice : ";
    cin >> ItemPrice;
    strcpy(this->date, Date.c_str());
    strcpy(this->itemName, ItemName.c_str());
    strcpy(this->quantity, Quantity.c_str());
    this->itemPrice = ItemPrice;
}