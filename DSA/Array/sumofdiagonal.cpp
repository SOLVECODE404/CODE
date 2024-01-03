#include <iostream>

int main()
{
    int n;

    // Input the size of the square matrix
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    // Declare a square matrix of size n x n
    int matrix[100][100];

    // Input elements of the matrix
    std::cout << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << "Enter element matrix[" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal elements
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += matrix[i][n-1-i];
    }

    // Display the sum
    std::cout << "Sum of the main diagonal elements: " << sum << std::endl;

    return 0;
}
