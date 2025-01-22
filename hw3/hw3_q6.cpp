#include <iostream>
#include <iomanip>
using namespace std; 

int main(){
    int HourStart, MinuteStart, length; 
    double cost; 
    string day;
    char input;

    cout << "Please enter the following: " << endl; 
    cout << "1. Day of the week: " << endl;
    cin >> day;
    cout << "2. Time the call started: " << endl; 
    cin >> HourStart >> input >> MinuteStart; 
    cout << "3. Length of the call in minutes: " << endl; 
    cin >> length; 

    if (day == "Mo" || "mo" || "Tu" || "tu" || "We" || "we" || "Th" || "th" || "Fr" || "fr") {
        if ((HourStart > 8 && HourStart <= 17) || (HourStart <= 18 && MinuteStart == 0)) {
            cost = length * 0.40;
        } else {
            cost = length * 0.25;
        }
    } else {
        cost = length * 0.15;
    }
    cout << "Cost of the call: $" << fixed << setprecision(2) << cost << endl;  
    return 0;
}
