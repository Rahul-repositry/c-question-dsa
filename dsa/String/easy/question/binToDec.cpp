// #include <iostream>
// #include <cmath>
// using namespace std;

// void bintodec(int n)
// {
//     int sum = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         if (lastDigit == 1)
//         {
//             int square = pow(2, i);
//             sum += square;
//         }
//         i++;
//         n /= 10;
//     }
//     cout << "The decimal equivalent of binary number is: " << sum << endl;
// }

// int main()
// {

//     int n;
//     cin >> n;
//     bintodec(n);
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

void bintodec(long long n)
{
    int sum = 0;
    int i = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        int power = pow(8, i);
        sum += power;

        i++;
        n /= 10;
    }

    cout << "The decimal equivalent of the binary number is: " << sum << endl;
}

int main()
{
    long long n;
    cin >> n;
    bintodec(n);
    return 0;
}
