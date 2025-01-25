#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sequence;
    int length = 0; 
    int product = 1;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: " <<endl;
    while (true) {
        cin >> sequence; 
        if (sequence == -1) {
            break;
        }
        product *= sequence;
        length++;
    }
    double root = pow(product, 1.0 / length);
    cout << "The geometric mean is: " << root << endl;
    return 0;
}
