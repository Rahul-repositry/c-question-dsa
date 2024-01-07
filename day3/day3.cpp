#include <iostream>
using namespace std;

int main()
{
    int n;

    // int row = 1;

    // int printNum = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         // cout << col;
    //         cout << printNum;
    //         printNum = printNum + 1;

    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // cin >> n;
    // int row = 1;

    // char printChar = 'A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         // cout << col;
    //         cout << printChar;
    //         printChar = printChar + 1;

    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // cin >> n;
    // int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     char printChar = 'A' + row - col;
    //     while (col <= n)
    //     {

    //         // cout << col;
    //         cout << printChar;
    //         printChar++;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        // 1st triangle

        int start = 1;
        while (start <= (n - row + 1))
        {
            cout << start << " ";
            ;
            start++;
        }

        // 2nd star triangle

        int star = 1;

        while (star <= row)
        {
            if (star == 1)
            {
                cout << "";
            }
            else
            {
                cout << "* ";
            }

            star++;
        }
        // 2nd star2 triangle

        int star2 = 1;

        while (star2 <= row)
        {
            if (star2 == 1)
            {
                cout << "";
            }
            else
            {
                cout << "* ";
            }

            star2++;
        }

        // 3rd trianlge

        int value = n - row + 1;
        while (col <= (n - row + 1))
        {
            cout << value << " ";
            value--;
            col++;
        }
        cout << endl;
        row++;
    }
}
