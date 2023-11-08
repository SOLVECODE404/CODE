#include <iostream>
#include <vector>

using namespace std;

vector<int> findMissingItems(const vector<int>& stockList, const vector<int>& databaseList) {
    vector<int> missingItems;
    for (int item : databaseList) {
        bool found = false;
        for (int stockItem : stockList) {
            if (item == stockItem) {
                found = true;
                break;
            }
        }
        if (!found) {
            missingItems.push_back(item);
        }
    }
    return missingItems;
}

int main() {
    vector<int> stockList = {1, 2, 3, 4, 5};
    vector<int> databaseList = {3, 4, 5, 6, 7};

    vector<int> missingItems = findMissingItems(stockList, databaseList);

    cout << "Missing Inventory Items: ";
    for (int item : missingItems) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
