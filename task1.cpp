// SIMPLE CALCULATOR

#include <iostream>
using namespace std;

class SimpleCal
{
public:
    float Addition(float a, float b)
    { // This function adds two entered value..
        return (a + b);
    }
    float Substraction(float a, float b)
    { // This function substracts two entered value..
        return (a - b);
    }
    float Multiplication(float a, float b)
    { // This function multiplies two entered value..
        return (a * b);
    }
    float Division(float a, float b)
    { // This function divides two entered value..
        return (a / b);
    }
};

int main()
{
    SimpleCal obj; // object is created named "obj".

    float value1, value2;
    char op;

    cout << "Enter an simple expression like (a+b) to perform the operation like +,-,*,/:";
    cin >> value1 >> op >> value2;  // Taken input from the user.

    switch (op)
    {
    case '+':
        cout << value1 << " + " << value2 << " = " << obj.Addition(value1, value2);
        break;
    case '-':
        cout << value1 << " - " << value2 << " = " << obj.Substraction(value1, value2);
        break;
    case '*':
        cout << value1 << " * " << value2 << " = " << obj.Multiplication(value1, value2);
        break;
    case '/': 
        if (value2 == 0)  // This is the condition for the denominator == 0 .
        {
            cerr << "Invalid Expression beacause denominator cannot contain zero";
            break;
        }

        cout << value1 << " / " << value2 << " = " << obj.Division(value1, value2);
        break;
    default:
        cerr << "INVALID OPERATOR" << endl;   // If the user input some other type of operator.
        break;
    }
    return 0;
}