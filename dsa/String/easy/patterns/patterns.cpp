#include <iostream>
using namespace std;

void print1(int length)
{ // Specify the data type (int) for the 'length' parameter
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
    return 0; // Remove the extra '44' from here
}
