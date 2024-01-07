// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>

std::vector<int> plusOne(std::vector<int> &digits)
{
    int i = digits.size() - 1;
    int lastD = digits[i];
    if (lastD != 9 || lastD != 0)
    {
        digits[i] = digits[i] + 1;
    }
    else if (lastD == 9)
    {

        for (int j = i; j >= 0; j--)
        {

            if (digits[j] == 9)
            {
                std::cout << "ifcondition" << digits[j] << std::endl;
                digits[j] = 0;
            }
            else
            {
                std::cout << "elsecondition" << digits[j] << std::endl;

                digits[j] = digits[j]++;
            }
        }
    }

    return digits;
}

int main()
{
    // Write C++ code here

    std::vector<int> digits = {4, 9, 9};
    std::vector<int> result = plusOne(digits);

    // Print the result
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }

    return 0;
}