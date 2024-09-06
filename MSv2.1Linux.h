#ifndef _MSv2_1Linux_h
#define _MSv2_1Linux_h
#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
void factor() {
    char again;
    int b, c, u, v;
    bool canfactor;
    cout << "This polynomial factorer assumes that the value of a, or the number next to x² is always 1.\n";
    cout << "Enter the coefficient of x: ";
    cin >> b;
    cout << "Enter the constant: ";
    cin >> c;
    canfactor = true;
    double discriminant;
    int temp;
    discriminant = b * b - 4 * c;
    if (discriminant < 0)
        canfactor = false;
    else {
        temp = static_cast<int>(sqrt(discriminant));
        if (temp * temp != discriminant)
            canfactor = false;
        else {
            if (((-b + temp) % 2) != 0 || ((-b - temp) % 2) != 0)
                canfactor = false;
            else {
                u = (b + temp) / 2;
                v = (b - temp) / 2;
            }
        }
    }
    //canfactor is the bool variable that makes sure that this is not a non factorable function.
    if (canfactor) {
        //these if statements just format the output so that the positive numbers get a + sign in front of them. The negatives already have a - sign, the they are in else statements.
        if (b >= 0)
            cout << "x² + " << b << "x";
        else 
            cout << "x² " << b << "x";
        if (c >= 0)
            cout << " + " << c << "  factored is\n";
        else 
            cout << " " << c << "  factored is\n";
        cout << "(x ";
        if (u >= 0)
            cout << "+ " << u;
        else 
            cout << u;
        cout << ") (x ";
        if (v >= 0) 
            cout << "+ " << v;
        else 
            cout << v;
        cout << ")\n\n";
    //This simple code turns the values of x into their positives         then prints them out.
        if (u > 0) 
            u -= (2*u);
        else if (u < 0) 
            u += (2*u);
        if (v > 0) 
            v -= (2*v);
        else if (v < 0) 
            v += (2*v);
        cout << "So, x is " << u << " and " << v << ".\n";
    }
    else {
        cout << "This function is not factorable.\n";
    }
    cout << "Would you like to factor something else? (y or n)\n";
    cin >> again;
    if (again == 'y') {
        factor();   
    }
    else 
        return;
}

void Multiples() {
    int timesdone = 0;
    int times = 0;
    int i = 0;
    char hr = 'h';
    int first = 0;
    int second = 0;
    cout << "Which two numbers would you like to find multiples of?" << endl << "1st number: ";
    cin >> first;
    cout << "Okay, first number is " << first << ".\nNow enter your second number: ";
    cin >> second;
    cout << "Great, now how many multiples would you like me to find? (Just one works too)" << endl;
    cin >> times;
    cout << endl << "Okay! That will do!" << endl;
    string goback = "notyet";
    while (goback != "goback") {
        if (timesdone == times) {
            cout << "Would you like to go back home?"<< endl << "Click H to go back home and R to restart this!" << endl;
            cin >> hr;
            if (hr == 'H' || hr == 'h') {
                goback = "goback";
            }
            else if (hr == 'R' || hr == 'r' ) {
                Multiples();
            }
            else {

            }    
        }
        if (i % first == 0 && i % second == 0) {
            cout << i << endl;
            timesdone++;    
        }
    i++;
    }
}

void Triangles() {
    float base = 0;
    float height = 0;
    float hypo = 0;
    float area = 0;
    char hr = 'h';
    cout << "Enter the base of your triangle: ";
    cin >> base;
    cout << endl << "Now enter the height of your triangle: ";
    cin >> height;
    hypo = (base * base) + (height * height);
    hypo = sqrt(hypo);
    area = (base * 0.5) * height;
    cout << "The hypotenuse of the triangle with the dimensions you entered with:\n Base: " << base << "\n Height: " << height << endl;
    cout << "Has:\n Hypotenuse: " << hypo << "\n Area: " << area << endl;
    cout << "Would you like to go back home?"<< endl << "Click H to go back home and R to restart this!" << endl;
    cin >> hr;
    if (hr == 'H' || hr == 'h') 
        return;
    else if (hr == 'r' || hr == 'R' ) 
        Triangles();
    else
        return;
}

void Calculator() {
    char op = '*';
    char hr;
    int first = 0;
    int second = 0;
    cout << "Enter operator. ^, +, -, %, *:" << endl;
    cin >> op;
    cout << "Enter your first, then your second integer to go in.\n";
    cin >> first >> second;
    int result;
    switch (op) {
        case '^':
            result = pow(first, second);
            break;
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '%':
            result = first % second;
            break;
        case '*':
            result = first * second;
            break;
        default:
            exit(0);
            break;
    }
    cout << "Answer: " << result << endl;
    cout << "Would you like to go back home?"<< endl << "Click H to go back home and R to restart this!" << endl;
    cin >> hr;
    if (hr == 'H' || hr == 'h') {

    }
    else if (hr == 'R' || hr == 'r' ) {
        Calculator();
    }
}
#endif