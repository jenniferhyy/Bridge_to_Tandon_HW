#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
    int length, sequence; 
    int counter = 1; 
    long product = 1;

    cout << "Please enter the length of the sequence: " << endl;
    cin >> length; 
    cout << "Please enter your sequence: " << endl;
    while (counter <= length) {
        cin >> sequence; 
        product *= sequence;
        counter++;
    }
    double root = pow(product, 1.0 / length);
    cout << "The geometric mean is: " << root << endl;
    return 0;
}
