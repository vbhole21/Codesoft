#include <iostream>
using namespace std;    

main ()
{
  string Operation;
  double Value1, Value2, Result;
    cout <<"Enetr the First Value:";
    cin >> Value1;
    cout <<"Enter the Operation:";
    cin >> Operation;
    cout <<"Enter the Second Value:";
    cin >> Value2;
    if (Operation == "+")
    {
        Result = Value1 + Value2;
        cout << "The Result is: " << Result << endl;
    }
    else if (Operation == "-")
    {
        Result = Value1 - Value2;
        cout << "The Result is: " << Result << endl;
    }
    else if (Operation == "*")
    {
        Result = Value1 * Value2;
        cout << "The Result is: " << Result << endl;
    }
    else if (Operation == "/")
    {
        Result = Value1 / Value2;
        cout << "The Result is: " << Result << endl;
    }
    else
    {
        cout << "Invalid Operation" << endl;
    }
    return 0;
}