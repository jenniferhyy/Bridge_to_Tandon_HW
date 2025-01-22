#include <iostream>
using namespace std; 

int main() {
    double number, c;
    int rounding; 

    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2; 
    const int ROUND = 3;

    cout << "Please enter a Real number: " << endl; 
    cin >> number;
    cout << "Choose your rounding method: " << endl; 
    cout << "1. Floor round" << endl; 
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> rounding; 

    switch (rounding) {
        case FLOOR_ROUND: 
            c = (int)(number);
            cout << c << endl;
            break; 
        case CEILING_ROUND: 
            if (number - (int)(number) == 0){
                c = number;
            } else {
                c = (int)(number + 1);
            }
            cout << c << endl;            
            break; 
        case ROUND: 
            if (number - (int)(number) == 0){
                c = number;
            } else if (number - (int)(number) < 0.5) {
                c = (int)(number);
            } else {
                c = (int)(number + 1);
            } 
            cout << c << endl;
            break;
        default :
            cout << "The input is incorrect." << endl;
    }
    return 0;
    
}
