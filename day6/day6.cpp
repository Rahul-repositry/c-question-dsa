#include <iostream>
using namespace std;

int main()
{
    int x = 123;
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        ans = ans * 10 + digit;
        cout << "ans" << ans << endl;
        x = x / 10;
        cout << x << endl;
    }
    return ans;

    return 0;
}