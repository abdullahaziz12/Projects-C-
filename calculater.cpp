#include <iostream>
#include <cmath> // ? for sin, cos, tan
using namespace std;

int main()
{
    float a, b, thetha;
    cout << "                              Calculator" << endl;
    cout << "Enter Your First Number: ";
    cin >> a;

    char op;
    cout << "Enter Your Operation (+, -, *, /, %, p for Percentage, s for sin, c for cos, t for tan): ";
    cin >> op;

    // For sin, cos, tan — no need for second number
    if (op != 's' && op != 'c' && op != 't')
    {
        cout << "Enter Your Second Number: ";
        cin >> b;
    }

    int c = a;
    int d = b;

    switch (op)
    {
    case '+':
        cout << "Result: " << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << "Result: " << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << "Result: " << a << " * " << b << " = " << a * b;
        break;

    case '/':
        if (b != 0)
            cout << "Result: " << a << " / " << b << " = " << a / b;
        else
            cout << "Error: Division by zero!";
        break;

    case '%':
        cout << "Result: " << c << " % " << d << " = " << c % d;
        break;

    case 'p':
        cout << "Result: " << a << "% of " << b << " = " << (a / 100) * b;
        break;

    // ? Trigonometric cases
    case 's':
        thetha = a * (3.14159 / 180); // degrees ? radians
        cout << "sin(" << a << "°) = " << sin(thetha);
        break;

    case 'c':
        thetha = a * (3.14159 / 180);
        cout << "cos(" << a << "°) = " << cos(thetha);
        break;

    case 't':
        thetha = a * (3.14159 / 180);
        cout << "tan(" << a << "°) = " << tan(thetha);
        break;

    default:
        cout << "Invalid Operation!";
    }

    return 0;
}

