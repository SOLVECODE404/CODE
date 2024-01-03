#include <iostream>

int fibonacciAtIndex(int start, int next, int k)
{
    for (int i = 0; i < k; ++i)
    {
        if (i == k - 1)
        {
            return start;
        }
        int temp = start;
        start = next;
        next = next + temp;
    }
    return -1; // Invalid index (should not reach here for a valid k)
}

int main()
{
    int start, k;

    // Input the starting point and index k
    std::cout << "Enter the starting point: ";
    std::cin >> start;

    std::cout << "Enter the index k: ";
    std::cin >> k;

    // Check for valid index
    if (k < 1)
    {
        std::cerr << "Invalid index. Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code
    }
    
    // Calculate and display the Fibonacci number at the given index
    int result = fibonacciAtIndex(start, start + 1, k);
    if (result != -1)
    {
        std::cout << "Fibonacci number at index " << k << ": " << result << std::endl;
    }
    else
    {
        std::cerr << "Invalid index. Please enter a valid index within the range of the series." << std::endl;
        return 1; // Exit with an error code
    }

    return 0;
}
