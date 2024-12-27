#include <iostream>
using namespace std;

int main() {
    char operation;
    double Value1, Value2;

       cout << "Enter the First Value: ";
         cin >> Value1;
         cout << "Enter the Operation: +, -, *, or /: ";
            cin >> operation;
            cout << "Enter the Second Value: ";
            cin >> Value2;


    switch(operation) {
        case '+':
            cout << Value1 << " + " << Value2 << " = " << Value1 + Value2;
            break;
        case '-':
            cout << Value1 << " - " << Value2 << " = " << Value1 - Value2;
            break;
        case '*':
            cout << Value1 << " * " << Value2 << " = " << Value1 * Value2;
            break;
        case '/':
            if(Value2 != 0)
                cout << Value1 << " / " << Value2 << " = " << Value1 / Value2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Operator is not correct";
            break;
    }

    return 0;
}
