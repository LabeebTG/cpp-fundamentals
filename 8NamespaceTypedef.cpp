#include <iostream>
using namespace std;

// 1. Namespace example
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
    int subtract(int a, int b) {
        return a - b;
    }
}

// 2. Nested namespace example (C++17 and above)
namespace Outer {
    namespace Inner {
        void show() {
            cout << "Inside Outer::Inner namespace" << endl;
        }
    }
}

// 3. Using 'using namespace' to avoid prefixing
using namespace MathOperations;

// 4. Typedef example (old style)
typedef unsigned long ulong;

// 5. Using 'using' for type alias (modern C++)
using uint = unsigned int;

// 6. Typedef for struct
struct Point {
    int x, y;
};
typedef struct Point Point2D;

// 7. Typedef for pointer type
typedef int* IntPtr;

int main() {
    // Using namespace functions with and without prefix
    cout << "Add (with prefix): " << MathOperations::add(5, 3) << endl;
    cout << "Subtract (with using namespace): " << subtract(10, 4) << endl;

    // Using nested namespace
    Outer::Inner::show();

    // Using typedef alias
    ulong bigNumber = 1234567890;
    cout << "ulong typedef: " << bigNumber << endl;

    // Using modern type alias
    uint positive = 100;
    cout << "uint alias: " << positive << endl;

    // Using typedef for struct
    Point2D p;
    p.x = 10;
    p.y = 20;
    cout << "Point2D typedef: (" << p.x << ", " << p.y << ")" << endl;

    // Using typedef for pointer
    IntPtr ptr = &p.x;
    cout << "IntPtr typedef points to: " << *ptr << endl;

    return 0;
}