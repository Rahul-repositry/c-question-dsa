#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size); // creating a vector of integers of size 'size'

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxValue = INT_MIN;
    int indexStart, indexEnd, current;

    for (int i = 0; i < size - 1; i++)
    {
        current = arr[i + 1] - arr[i];
        if (maxValue < current)
        {
            maxValue = current;
            indexStart = i;
            indexEnd = i + 1;
        }
        if (maxValue == current)
        {
            indexEnd++;
        }
    }

    int count = indexEnd - indexStart;
    cout << count << endl;
    return 0;
}