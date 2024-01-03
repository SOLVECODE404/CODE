#include <iostream>

int main()
{
    int billAmount;
    std::cout << "Enter the bill amount: ";
    std::cin >> billAmount;
    int denominations[] = {100, 50, 20, 10, 5, 2, 1};
    std::cout << "Number of notes for each denomination:" << std::endl;
    for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); ++i)
    {
        int numberOfNotes = billAmount / denominations[i];
        if (numberOfNotes > 0)
        {
            std::cout << denominations[i] << " : " << numberOfNotes << " notes" << std::endl;
            billAmount %= denominations[i];
        }
    }
    return 0;
}
