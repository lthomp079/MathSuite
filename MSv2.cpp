#include "MSv2.h"
using namespace std;
int main() { 
    int choice;
    SetConsoleTitle(TEXT("MathSuite v1.05"));
    setColor(FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
    cout << "Welcome to MathSuite Version 1.05!" << endl;
    cout << "What would you like to do?" << endl;
    cout << "0: Exit\n1: Multiples solver\n2: Triangle Solver\n" <<
        "3: Calculator\n4: Polynomial factorer" << endl;
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
            case 4:
                factor();
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
