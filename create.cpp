#include <iostream>
#include "inventory.h"

using namespace std;

void createItem(Item *items, int *count) {
    if (*count >= MAX) {
        cout << "Inventory full.\n";
        return;
    }

    cout << "Enter ID: ";
    cin >> items[*count].id;

    cout << "Enter name: ";
    cin.ignore();
    cin.getline(items[*count].name, 50);

    cout << "Enter quantity: ";
    cin >> items[*count].quantity;

    cout << "Enter price: ";
    cin >> items[*count].price;

    (*count)++;
    cout << "Item added successfully.\n";
}
