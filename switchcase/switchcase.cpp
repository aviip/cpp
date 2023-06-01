#include <iostream>

using namespace std;

int main()
{
    int num = 2;
    char ch = 'a';
    switch (num)
    {
    case 1:
        cout << "first";
        break;

    case 2:
        switch (ch)
        {
        case 'a':
            cout << "char : " << ch << endl;
            break;

        case 'b':
            cout << "char : " << ch << endl;
            break;

        default:
            cout << "default" << endl;
            break;
        }
        cout << "second";
        break;

    default:
        cout << "default";
    }
}