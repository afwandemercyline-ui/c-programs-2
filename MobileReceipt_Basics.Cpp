/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to calculate price of phones and produce receipt 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    // Get customer details
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    // Calculate total sales
    totalSales = quantity * pricePerPhone;

    // Display receipt
    cout << "\n========== SALES RECEIPT ==========\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price Per Phone: " << pricePerPhone << endl;
    cout << "Total Sales: " << totalSales << endl;
    cout << "===================================\n";

    return 0;
}