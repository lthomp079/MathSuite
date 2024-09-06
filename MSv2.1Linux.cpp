#include "MSv2.1Linux.h"
using namespace std;
int main() { 
    int choice;
    cout << "Welcome to MathSuite Version 2.1!\tNew and Improved!\nMade by Lucas Thompson - lthomp079 on Github" << endl;
    cout << "What would you like to do?" << endl;
    cout << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n" <<
        "3: Calculator\n4: Polynomial Factorer" << endl;
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
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
        cout << endl << "What would you like to do next?" << endl << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n3: Calculator\n4: Polynomial Factorer" << endl;
        cin >> choice;
    }
    return 0;
}
