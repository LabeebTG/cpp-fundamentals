#include <iostream>
using namespace std;

// 1. Function declaration and definition (no parameters, no return value)
void greet() {
    // This function simply prints a greeting message
    cout << "Hello from greet()!" << endl;
}

// 2. Function with parameters (no return value)
void printSum(int a, int b) {
    // This function takes two integers and prints their sum
    cout << "Sum of " << a << " and " << b << " is " << (a + b) << endl;
}

// 3. Function with return value (no parameters)
int getNumber() {
    // This function returns a fixed integer value
    return 42;
}

// 4. Function with parameters and return value
int multiply(int x, int y) {
    // This function multiplies two integers and returns the result
    return x * y;
}

// 5. Function overloading (same name, different parameters)
void display(int n) {
    cout << "Displaying int: " << n << endl;
}
void display(double d) {
    cout << "Displaying double: " << d << endl;
}
void display(string s) {
    cout << "Displaying string: " << s << endl;
}

// 6. Default arguments in functions
void showMessage(string msg = "Default message") {
    // If no argument is passed, "Default message" will be used
    cout << msg << endl;
}

// 7. Passing by value (original variable is NOT modified)
void incrementByValue(int num) {
    num++;
    cout << "Inside incrementByValue: " << num << endl;
}

// 8. Passing by reference (original variable IS modified)
void incrementByReference(int &num) {
    num++;
    cout << "Inside incrementByReference: " << num << endl;
}

// 9. Passing by pointer (original variable CAN be modified)
void incrementByPointer(int *num) {
    (*num)++;
    cout << "Inside incrementByPointer: " << *num << endl;
}

// 10. Function returning multiple values using reference parameters
void swap(int &a, int &b) {
    // Swaps the values of a and b
    int temp = a;
    a = b;
    b = temp;
}

// 11. Recursive function (calls itself)
int factorial(int n) {
    // Calculates factorial of n recursively
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// 12. Inline function (suggests to compiler to insert code directly)
inline int square(int x) {
    return x * x;
}

// 13. Function with array parameter
void printArray(int arr[], int size) {
    // Prints all elements of an integer array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 14. Function with const parameter (cannot modify the argument)
void printConst(const int num) {
    cout << "Const parameter: " << num << endl;
}

// 15. Function with default and reference parameters
void setValue(int &x, int value = 100) {
    x = value;
}

// 16. Function prototype (declaration before main, definition after main)
void sayBye();

int main() {
    // 1. Calling a simple function
    greet();

    // 2. Calling a function with parameters
    printSum(5, 7);

    // 3. Calling a function that returns a value
    int num = getNumber();
    cout << "Returned from getNumber(): " << num << endl;

    // 4. Calling a function with parameters and return value
    int product = multiply(3, 4);
    cout << "Product: " << product << endl;

    // 5. Function overloading
    display(10);
    display(3.14);
    display("Hello!");

    // 6. Default arguments
    showMessage();
    showMessage("Custom message");

    // 7. Passing by value
    int a = 5;
    incrementByValue(a);
    cout << "After incrementByValue, a: " << a << endl; // a is unchanged

    // 8. Passing by reference
    int b = 5;
    incrementByReference(b);
    cout << "After incrementByReference, b: " << b << endl; // b is incremented

    // 9. Passing by pointer
    int c = 5;
    incrementByPointer(&c);
    cout << "After incrementByPointer, c: " << c << endl; // c is incremented

    // 10. Returning multiple values using reference parameters
    int x = 10, y = 20;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // 11. Recursive function
    int fact = factorial(5);
    cout << "Factorial of 5: " << fact << endl;

    // 12. Inline function
    cout << "Square of 6: " << square(6) << endl;

    // 13. Function with array parameter
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    // 14. Function with const parameter
    printConst(99);

    // 15. Function with default and reference parameters
    int z;
    setValue(z);
    cout << "z after setValue: " << z << endl;
    setValue(z, 200);
    cout << "z after setValue with 200: " << z << endl;

    // 16. Function prototype usage
    sayBye();

    return 0;
}

// 16. Function definition after main (using prototype)
void sayBye() {
    cout << "Goodbye from sayBye()!" << endl;
}