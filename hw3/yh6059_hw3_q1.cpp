#include <iostream>
#include <iomanip>
using namespace std; 


int main(){
    double item1a, item1b, item2a, item2b, discount, tax, BasePrice, DiscountedPrice, PostTaxPrice; 
    char ClubCard;

    cout << "Enter price of first item: " << endl; 
    cin >> item1a; 
    cout << "Enter price of second item: " << endl; 
    cin >> item2a;
    cout << "Does customer have a club card? (Y/N): " << endl; 
    cin >> ClubCard; 
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " << endl; 
    cin >> tax; 
    BasePrice = item1a + item2a; 
    cout << "Base Price: " << fixed << setprecision(1) << BasePrice << endl;

    if (item1a < item2a) {
        if (ClubCard == 'Y' || ClubCard == 'y') {
            DiscountedPrice = (item1a * 0.5 + item2a) * 0.9;  
            cout << "Price after discounts: " << fixed << setprecision(1) << DiscountedPrice << endl;
        } else if (ClubCard == 'N' || ClubCard == 'n') {
            DiscountedPrice = item1a + item2a; 
            cout << "Price after discounts: " << fixed << setprecision(1) << DiscountedPrice << endl;
        }
    } else {
        if (ClubCard == 'Y' || ClubCard == 'y') {
            DiscountedPrice = (item2a * 0.5 + item1a) * 0.9;  
            cout << "Price after discounts: " << fixed << setprecision(1) << DiscountedPrice << endl;
        } else if (ClubCard == 'N' || ClubCard == 'n') {
            DiscountedPrice = item1a + item2a; 
            cout << "Price after discounts: " << fixed << setprecision(1) << DiscountedPrice << endl;
        }
    }

    PostTaxPrice = DiscountedPrice * (1 + (tax / 100));
    cout << "Total price: " << fixed << setprecision(5) << PostTaxPrice << endl;
    return 0;
}
