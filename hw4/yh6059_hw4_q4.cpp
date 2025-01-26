#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
    cout << "section a" << endl;
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
    
    cout << "section b" << endl;
        int sequence1;
    int length1 = 0; 
    int product1 = 1;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " <<endl;
    while (true) {
        cin >> sequence1; 
        if (sequence1 == -1) {
            break;
        }
        product1 *= sequence1;
        length1++;
    }
    double root1 = pow(product1, 1.0 / length1);
    cout << "The geometric mean is: " << root1 << endl;
    return 0;
}
