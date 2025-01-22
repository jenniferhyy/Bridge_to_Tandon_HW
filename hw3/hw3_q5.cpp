#include <iostream>
using namespace std;

int main(){
    double pounds, kilograms, inches, meters, bmi;
    string categorisation; 

    cout << "Please enter weight (in pounds): " << endl; 
    cin >> pounds; 
    kilograms = pounds * 0.453592; 
    cout << "Please enter height (in inches): " << endl;
    cin >> inches; 
    meters = inches * 0.0254;
    bmi = kilograms / (meters * meters);

    if (bmi < 18.5) {
        categorisation = "Underweight";
    } else if (bmi >= 18.5 && bmi <= 25) {
        categorisation = "Normal";
    } else if (bmi >= 25 && bmi <= 30) {
        categorisation = "Overweight";
    } else {
        categorisation = "Obese";
    } 

    cout << "The weight status is: " << categorisation << endl;

    return 0; 
}
