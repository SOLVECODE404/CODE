#include <iostream>
#include <vector>

using namespace std;

int countProductPairs(vector<int> prices, int totalAmount)
{
    int count = 0;
    int n = prices.size();

    // Iterate through all possible pairs of products
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (prices[i] + prices[j] == totalAmount)
            {
                // Found a pair of products with the required total amount
                ++count;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> productPrices = {5, 10, 12,3, 20};
    int totalAmount = 15;

    int pairsCount = countProductPairs(productPrices, totalAmount);

    cout << "Number of product pairs with total amount " << totalAmount << ": " << pairsCount << endl;

    return 0;
}
