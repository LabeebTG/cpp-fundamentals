#include <iostream>
using namespace std;

int main() {
    // 1. Declaring and initializing a 1D array
    int numbers[5] = {1, 2, 3, 4, 5};

    // 2. Accessing array elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Third element: " << numbers[2] << endl;

    // 3. Modifying array elements
    numbers[1] = 10;
    cout << "Modified second element: " << numbers[1] << endl;

    // 4. Inputting values into a 1D array
    int inputArr[3];
    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; i++) {
        cin >> inputArr[i];
    }

    // 5. Outputting 1D array elements using a loop
    cout << "You entered: ";
    for (int i = 0; i < 3; i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;

    // 6. Array size using sizeof
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Size of numbers array: " << arrSize << endl;

    // 7. Declaring and initializing a 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "\n2D Array (matrix) elements:" << endl;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // 8. Declaring and initializing a 3D array
    int cube[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    cout << "\n3D Array (cube) elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "cube[" << i << "][" << j << "][" << k << "] = " << cube[i][j][k] << endl;
            }
        }
    }

    return 0;
}