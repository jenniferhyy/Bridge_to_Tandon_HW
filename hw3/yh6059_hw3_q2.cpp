#include <iostream>
using namespace std; 

int main() {
    string name, status; 
    int GraduationYear, CurrentYear;

    cout << "Please enter your name: " << endl;
    cin >> name; 
    cout << "Please enter your graduation year: " << endl;
    cin >> GraduationYear; 
    cout << "Please enter current year: " << endl;
    cin >> CurrentYear;
    if (GraduationYear == CurrentYear) {
        status = "Graduated";
    } else if (GraduationYear == CurrentYear + 4) {
        status = "a Freshman";
    } else if (GraduationYear == CurrentYear + 3) {
        status = "a Sophomore";
    } else if (GraduationYear == CurrentYear + 2) {
        status = "a Junior";
    } else if (GraduationYear == CurrentYear + 1) {
        status = "a Senior";    
    } else if (GraduationYear - CurrentYear >= 5) {
        status = "not in college yet";
    } else {
        cout << "incorrect input" << endl;
        return 0;
    }
    cout << name << ", you are " << status << endl;
    return 0;
}
