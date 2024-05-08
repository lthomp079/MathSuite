#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

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
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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
    if (hr == 'H' || hr == 'h') {
        
    }
    else if (hr == 'r' || hr == 'R' ) {
        Triangles();
    }
    else {
        exit(0);
    }   
}

void Calculator() {
    char op = '*';
    char hr;
    int first = 0;
    int second = 0;
    cout << "Enter operator. ^, +, -, %, *:" << endl;
    cin >> op;
    cout << "Enter your first, then your second integer to go in." << endl;
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

int main() { 
    int choice;
    setColor(FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
    cout << "Welcome to MathSuite Version 1.05!" << endl;
    cout << "What would you like to do?" << endl;
    cout << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n3: Calculator" << endl;
    setColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
    cin >> choice;
    while (choice != 0) {
        switch (choice) {
            case 1:
                Multiples();
                break;
            case 2:
                Triangles();
                break;
            case 3:
                Calculator();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        setColor(FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
        cout << endl << "What would you like to do next?" << endl << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n3: Calculator" << endl;
        setColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
        cin >> choice;
    }
    return 0;
}
