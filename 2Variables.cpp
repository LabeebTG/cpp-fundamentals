#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int age; // Age of the user
    double height; // Height in feet
    string name; // Initial of the user's name

    // Input values for the variables
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height in feet: ";
    cin >> height;
    cout << "Enter the initial of your name: ";
    cin >> name;

    // Output the values of the variables to the console
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Name: " << name << endl;

    // Return 0 to indicate successful execution
    return 0;
}