#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first value : " << endl;
    cin >> a;

    cout << "Enter the second value : " << endl;
    cin >> b;

    char oper;
    cout << "Enter the operation : " << endl;
    cin >> oper;

    switch (oper)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    default:
        break;
    }
}