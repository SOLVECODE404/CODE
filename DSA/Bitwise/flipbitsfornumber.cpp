#include <iostream>
#include <bitset>

// Function to flip the binary representation of a number
unsigned int flipBinary(unsigned int num)
{
    // Count the number of bits in the binary representation
    int numBits = sizeof(num) * 8 - __builtin_clz(num) - 1;

    // Flip each bit in the binary representation
    for (int i = 0; i <= numBits; ++i)
    {
        num ^= (1 << i);
    }

    return num;
}

int main()
{
    unsigned int number;

    // Taking input from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Flipping the binary representation
    unsigned int flippedNumber = flipBinary(number);

    // Displaying the original and flipped binary representations
    std::cout << "Original binary: " << std::bitset<32>(number) << std::endl;
    std::cout << "Flipped binary:  " << std::bitset<32>(flippedNumber) << std::endl;
}
