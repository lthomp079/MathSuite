#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
    string yn;
    float hypo;
    float base;
    float height;
    float area;
    int st;
    int nd;
    int times;
    int i = 1;
    int timesdone = 0;
    main:
    int choice = 0;
    cout << "Welcome to MathSuite Version 1.01!" << endl << "What would you like to do?" << endl << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n3: [null]" << endl;
    cin >> choice;
    if (choice == 1) {
        goto multiples;
    }
    if (choice == 0) {
        cout << ".";
        usleep(200000);
        cout << ".";
        return 0;
    }
    if (choice == 2) {
        goto triangles;
    }
    else {
        return 0;
    }
    /* Multiples Finder!
    This loops back into main in the end, which should be the home
    screen.*/
    multiples:
    
    cout << "Which two numbers would you like to find multiples of?" << endl << "1st number: ";
    cin >> st;
    cout << "Okay, first number is " << st << ".\nNow enter your second number: ";
    cin >> nd;
    cout << "Great, now how many multiples would you like me to find? (Just one works too)" << endl;
    cin >> times;
    cout << endl << "Okay! That will do!" << endl;
    while (i != i * 2) {
        if (timesdone == times) {
            usleep(1000000);
            cout << "Would you like to go back home?"<< endl << "Click Y to go back home and N to restart this!" << endl;
            cin >> yn;
            if (yn == "Y" or yn == "y") {
                goto main;
            }
            else if (yn == "n" or yn == "N" ) {
                goto multiples;
            }
            else {
                return 0;
            }    
        }
        if (i % st == 0 && i % nd == 0) {
            cout << i << endl;
            timesdone++;    
        }
    i++;
    }
    triangles:

    cout << "Enter the base of your triangle: ";
    cin >> base;
    cout << endl << "Now enter the height of your triangle: ";
    cin >> height;
    hypo = (base * base) + (height * height);
    hypo = sqrt(hypo);
    area = (base * 0.5) * height;
    cout << "The hypotenuse of the triangle with the dimensions you entered with:\n Base: " << base << "\n Height: " << height << endl;
    cout << "Has:\n Hypotenuse: " << hypo << "\n Area: " << area;
    cout << "Would you like to go back home?"<< endl << "Click Y to go back home and N to restart this!" << endl;
    cin >> yn;
    if (yn == "Y" or yn == "y") {
        goto main;
    }
    else if (yn == "n" or yn == "N" ) {
        goto triangles;
    }
    else {
        return 0;
    }    
    
}
