#include <iostream>
#include <iomanip> // for formatting output
#include <string>
using namespace std;

int main() {
    string itemName[50];
    int quantity[50];
    double price[50], total[50];
    int i = 0;
    char more;
    char date[50];

    cout << "\n***** SIMPLE BILLING SYSTEM *****\n";
    cout << "Enter the date: ";
    cin >> date;

    do {
        cout << "\nEnter item name: ";
        cin >> itemName[i];
        cout << "Enter quantity: ";
        cin >> quantity[i];
        cout << "Enter unit price: ";
        cin >> price[i];

        total[i] = quantity[i] * price[i];

        cout << "Add another item? (y/n): ";
        cin >> more;

        i++;
    } while (more == 'y' || more == 'Y');

    double grandTotal = 0;

    cout << "\n\n--------------------------------------------\n";
    cout << "                 BILL RECEIPT\n";
    cout << "Date: " << date << endl;
    cout << "--------------------------------------------\n";
    cout << left << setw(15) << "Item Name" 
         << setw(10) << "Qty" 
         << setw(12) << "Price" 
         << setw(12) << "Total" << endl;
    cout << "--------------------------------------------\n";

    for (int j = 0; j < i; j++) {
        cout << left << setw(15) << itemName[j]
             << setw(10) << quantity[j]
             << setw(12) << price[j]
             << setw(12) << total[j] << endl;
        grandTotal += total[j];
    }

    cout << "--------------------------------------------\n";
    cout << setw(37) << left << "Grand Total: " << grandTotal << endl;
    cout << "--------------------------------------------\n";
    cout << "          THANK YOU! VISIT AGAIN\n";
    cout << "--------------------------------------------\n\n";

    return 0;
}
