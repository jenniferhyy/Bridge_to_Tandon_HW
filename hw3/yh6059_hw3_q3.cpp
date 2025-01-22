#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int main(){
    double a, b, c, x, y; 
    cout << "Please enter value of a: " << endl;
    cin >> a;
    cout << "Please enter value of b: " << endl; 
    cin >> b;
    cout << "Please enter value of c: " << endl; 
    cin >> c;
    
    if ((b * b - 4 * a * c) < 0){
        cout << "This equation has no real solution" << endl; 
    } else if (a == 0 && b == 0 && c == 0){
        cout << "This equation has an infinite number of solutions" << endl; 
    } else if (a == 0 && b == 0){
        cout << "This equation has no solution" << endl; 
    } else if ((b * b - 4 * a * c) == 0){
        x = ((-b + sqrt(b * b - 4 * a * c))/(2 * a));
        cout << "This equation has a single real solution x = " << fixed << setprecision(1) << x << endl; 
    } else {
        x = ((-b + sqrt(b * b - 4 * a * c))/(2 * a));        
        y = ((-b - sqrt(b * b - 4 * a * c))/(2 * a));        
        cout << "This equation has two real solutions, x = " << fixed << setprecision(1) << x << " or " << fixed << setprecision(1) << y << endl;
    }
    return 0;
}
