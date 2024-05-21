#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int age=0;
    double weight, F;
    while (age <= 0) {
        cout << "\n\nEnter your age: ";
        cin >> age;
    }
    if (age >= 21) {
        cout << "\nEnter your weight in Kg: ";
        cin >> weight;
        F = -(double(age) / 40) + pow((pow((1 + (weight * weight)), 3) / (age * 3)), 0.5);
        cout << "\nThe computed result is: " << F;
    }
    else {
        cout << "\nYour age must be 21 or older.";
    }

}
