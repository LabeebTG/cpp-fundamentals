#include <iostream>
using namespace std;

int main() {
    // Simple if statement
    int a = 10;
    if (a > 5) {
        cout << "a is greater than 5 (if statement)" << endl;
    }

    // if-else statement
    int b = 3;
    if (b > 5) {
        cout << "b is greater than 5 (if-else statement)" << endl;
    } else {
        cout << "b is not greater than 5 (if-else statement)" << endl;
    }

    // if-else if-else ladder
    int c = 7;
    if (c > 10) {
        cout << "c is greater than 10 (if-else if-else ladder)" << endl;
    } else if (c > 5) {
        cout << "c is greater than 5 but less than or equal to 10 (if-else if-else ladder)" << endl;
    } else {
        cout << "c is 5 or less (if-else if-else ladder)" << endl;
    }

    // Nested if statement
    int d = 8;
    if (d > 5) {
        if (d < 10) {
            cout << "d is between 6 and 9 (nested if statement)" << endl;
        }
    }

    // Ternary operator (conditional operator)
    int e = 4;
    string result = (e % 2 == 0) ? "e is even (ternary operator)" : "e is odd (ternary operator)";
    cout << result << endl;

    // Switch statement
    int day = 2;
    switch (day) {
        case 1:
            cout << "Monday (switch statement)" << endl;
            break;
        case 2:
            cout << "Tuesday (switch statement)" << endl;
            break;
        case 3:
            cout << "Wednesday (switch statement)" << endl;
            break;
        default:
            cout << "Another day (switch statement)" << endl;
            break;
    }

    return 0;
}
