#include <iostream>
#include <windows.h>
using namespace std;
int calculator(char* oper, int* first, int* second) {
    int result;
    switch (*oper) {
        case '+':
            result = (*first + *second);
            break;
        case '*':
            result = (*first * *second);
            break;
        case '-':
            result = (*first - *second);
            break;
        case '%':
            result = (*first % *second);
            break;
        case '/':
            result = (*first / *second);
            break;
        default:
            cout << "Hmm... We couldn't recognize your operator.";
            exit(0);
            break;
    }
}

int main() {
    int num1;
    int num2;
    char op;
    string close;
    cout << "Hello!\n";
    cout << "Please enter the two numbers you would like to calculate.\n";
    cin >> num1 >> num2;
    cout << "Great! You have picked " << num1 << " & " << num2 << " as your numbers!\n";
    cout << "Now please enter your operator. ( * and t for times, + and a for add, - and m for minus, and % for modulus" << endl;
    cin >> op; 
    //Changing operators based on alphabetical value.
        if (op == 't') {
            op = '*';
        }
        if (op == 'a') {
            op = '+';
        }
        if (op == 'm') {
            op = '-';
        }
        if (op == 'd') {
            op = '/';
        }
    //Telling user what they inputted.
    cout << "Okay, you chose " << op << " as your operator.\n";
    int end = calculator(&op, &num1, &num2);
    cout << "The answer to the equation " << num1 <<" "<< op <<" "<< num2 << " is " << end; 
    Sleep(3000);
    return 0;
}