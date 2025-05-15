#include "MSv2.2.h"
using namespace std;
int main() { 
    int choice;
    string choices = "0: Exit\n1: Multiples solver\n2: Triangle Solver\n3: Calculator\n4: Polynomial Factorer\n5: Fibonacci Checker\n";
    SetConsoleTitle(TEXT("MathSuite v2.2"));
    cout << "Welcome to MathSuite Version 2.2!\tNew and Improved!\nMade by Lucas Thompson - lthomp079 on Github" << endl;
    cout << "What would you like to do?" << endl;
    cout << choices;
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
            case 4:
                factor();
                break;
            case 5:
                fib();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        cout << endl << "What would you like to do next?\n" << choices;
        cin >> choice;
    }
    system("pause");
    return 0;
}
