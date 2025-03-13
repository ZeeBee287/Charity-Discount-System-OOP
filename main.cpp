#include <iostream>

using namespace std;

float dis(int, float);

int main()
{
    int a; 
    float percentage;
    int option;
    int num = 0;
    int price;
    int sum = 0;
    float discounted_price;

    cout << "Thank you for shopping at J&Z's Clothing Line" << endl;
    cout << "\nBeing human is given, but keeping our humanity is a choice\n" << endl;
    cout << "J&Z's are proud to present amazing jaw-dropping discounts for the international charity week from 25th November to 9th December\n" << endl;

    // Input validation for date
    while (true) {
        cout << "Please enter the date when you shopped at J&Z's (between 25 and 9): ";
        cin >> a;

        if (a >= 25 && a <= 30) {
            cout << "You have received a discount of 50%" << endl;
            percentage = 50.0 / 100.0;
            break;
        } 
        else if (a >= 1 && a <= 5) {
            cout << "You have received a discount of 30%" << endl;
            percentage = 30.0 / 100.0;
            break;
        } 
        else if (a >= 6 && a <= 9) {
            cout << "You have received a discount of 10%" << endl;
            percentage = 10.0 / 100.0;
            break;
        } 
        else {
            cout << "Invalid date! Please enter again." << endl;
        }
    }

    // Get number of items and their prices
    cout << "\nPlease enter the number of items you purchased: ";
    cin >> num;

    cout << "\nEnter the price of each item: " << endl;
    for (int i = 0; i < num; i++) {
        cin >> price;
        sum += price;
    }

    cout << "\nYour total bill is: " << sum << endl;
    
    // Apply discount
    discounted_price = dis(sum, percentage);
    cout << "New bill after discount: " << discounted_price << endl;

    // Charity selection
    cout << "\nSelect an option for the charity your money will be donated to:\n";
    cout << "1 - The Edhi Foundation\n";
    cout << "2 - The Ansar Burney Trust\n";
    cout << "3 - Shaukat Khanum Cancer Hospital\n";
    cout << "Enter your choice: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Thank you for donating to The Edhi Foundation." << endl;
            break;
        case 2:
            cout << "Thank you for donating to The Ansar Burney Trust." << endl;
            break;
        case 3:
            cout << "Thank you for donating to Shaukat Khanum Cancer Hospital." << endl;
            break;
        default:
            cout << "Invalid selection!" << endl;
            break;
    }

    cout << "\nTHANK YOU FOR SHOPPING AT J&Z'S. DO COME AGAIN!" << endl;
    cout << "Coded by Zahra Batool and Javeria Liaqat" << endl;

    return 0;
}

float dis(int x, float y)
{
    return x - (x * y);  // Returns final amount after discount
}
