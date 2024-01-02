#include <iostream>
#include "calculator.cpp"
#include <cmath>

using namespace std;

int main()
{
    double x = 0.0, y = 0.0, result = 0.0;
    char oper = '#';

    cout << "Console Calculator" << endl << endl;
    cout << "Please enter the operation to perform." << endl;
    cout << "Format: a+b | a-b | a*b | a/b" << endl;
    
    Calculator c;
    while (true) {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);

        if (c.hasError()) {
            cerr << c.getErrorMessage() << endl;
            break;
        }

        cout << "Result of " << x << oper << y << " is: " << result << endl;
        oper = '#';
    }

    return 0;
}
