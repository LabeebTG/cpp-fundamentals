#include <iostream>
using namespace std;

int main() {
    // 1. Basic pointer declaration and initialization
    int a = 10;
    int *p;           // Declare a pointer to int
    p = &a;           // Store the address of variable a in pointer p

    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value of pointer p (address of a): " << p << endl;
    cout << "Value pointed to by p (*p): " << *p << endl;

    // 2. Changing value using pointer
    *p = 20;          // Change the value of a through the pointer
    cout << "New value of a after *p = 20: " << a << endl;

    // 3. Pointer to another variable
    int b = 30;
    p = &b;           // Now p points to b
    cout << "p now points to b, *p: " << *p << endl;

    // 4. Null pointer
    int *nullPtr = nullptr; // nullptr is a pointer that points to nothing
    cout << "Null pointer value: " << nullPtr << endl;

    // 5. Pointer arithmetic
    int arr[3] = {1, 2, 3};
    int *ptr = arr;   // Points to the first element of arr
    cout << "Pointer arithmetic with array:" << endl;
    cout << "*ptr: " << *ptr << endl;         // 1
    cout << "*(ptr + 1): " << *(ptr + 1) << endl; // 2
    cout << "*(ptr + 2): " << *(ptr + 2) << endl; // 3

    // 6. Array of pointers
    int x = 5, y = 10, z = 15;
    int *ptrArr[3] = {&x, &y, &z};
    cout << "Array of pointers:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "*ptrArr[" << i << "]: " << *ptrArr[i] << endl;
    }

    // 7. Pointer to pointer (double pointer)
    int **pp = &p;
    cout << "Pointer to pointer (double pointer):" << endl;
    cout << "p points to: " << p << ", *p: " << *p << endl;
    cout << "pp points to: " << pp << ", *pp: " << *pp << ", **pp: " << **pp << endl;

    // 8. Dynamic memory allocation (new and delete)
    int *dynPtr = new int;      // Allocate memory for one int
    *dynPtr = 100;
    cout << "Dynamically allocated int: " << *dynPtr << endl;
    delete dynPtr;              // Free the memory

    // 9. Dynamic array allocation
    int n = 3;
    int *dynArr = new int[n];   // Allocate array of 3 ints
    for (int i = 0; i < n; i++) {
        dynArr[i] = i * 10;
    }
    cout << "Dynamically allocated array: ";
    for (int i = 0; i < n; i++) {
        cout << dynArr[i] << " ";
    }
    cout << endl;
    delete[] dynArr;            // Free the array memory

    // 10. Const pointer and pointer to const
    int val = 50;
    int *const constPtr = &val;     // const pointer: address can't change, value can
    *constPtr = 60;                 // OK
    // constPtr = &a;               // Error: can't change address

    const int *ptrToConst = &val;   // pointer to const: value can't change, address can
    // *ptrToConst = 70;            // Error: can't change value
    ptrToConst = &a;                // OK

    cout << "Const pointer value: " << *constPtr << endl;
    cout << "Pointer to const value: " << *ptrToConst << endl;

    return 0;
}