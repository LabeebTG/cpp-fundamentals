#include <iostream>
using namespace std;

int main() {
    // 1. For loop: Repeats a block of code a fixed number of times
    cout << "For loop example:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    // 2. While loop: Repeats a block of code while a condition is true
    cout << "\nWhile loop example:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << "j = " << j << endl;
        j++;
    }

    // 3. Do-while loop: Executes the block at least once, then repeats while condition is true
    cout << "\nDo-while loop example:" << endl;
    int k = 1;
    do {
        cout << "k = " << k << endl;
        k++;
    } while (k <= 5);

    // 4. Range-based for loop: Used to iterate over elements in a collection (like arrays)
    cout << "\nRange-based for loop example:" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    for (int value : arr) {
        cout << "value = " << value << endl;
    }

    return 0;
}