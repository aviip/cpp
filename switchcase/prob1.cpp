// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int count100 = 0;
//     int count50 = 0;
//     int count20 = 0;
//     int count1 = 0;

//     switch (n)
//     {
//     case (n >= 100):
//         count100++;
//         n = n - 100;
//         break;

//     case (n >= 50):
//         count50++;
//         n = n - 50;
//         break;

//     case (n >= 20):
//         count20++;
//         n = n - 20;
//         break;
//     default:
//         count1++;
//         n = n - 1;
//         break;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count100 = 0;
    int count50 = 0;
    int count20 = 0;
    int count1 = 0;

    if (n >= 100)
    {
        count100 = n / 100;
        n = n % 100;
    }

    if (n >= 50)
    {
        count50 = n / 50;
        n = n % 50;
    }

    if (n >= 20)
    {
        count20 = n / 20;
        n = n % 20;
    }

    count1 = n;

    cout << "100 notes : " << count100 << endl;
    cout << "50 notes : " << count50 << endl;
    cout << "20 notes : " << count20 << endl;
    cout << "1 notes : " << count1 << endl;
}
