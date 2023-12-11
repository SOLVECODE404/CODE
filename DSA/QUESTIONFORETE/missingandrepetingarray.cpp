#include <bits/stdc++.h>

using namespace std;

void printTwoElements(int arr[], int n)

{

    int temp[n] = {}; // Creating temp array of size n with

    int repeatingNumber = -1;

    int missingNumber = -1;

    for (int i = 0; i < n; i++)
    {

        temp[arr[i] - 1]++;

        if (temp[arr[i] - 1] > 1)
        {

            repeatingNumber = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (temp[i] == 0)
        {

            missingNumber = i + 1;

            break;
        }
    }

    cout << repeatingNumber << " " << missingNumber;
}

int main()

{

    int n;
    cin >> n;
    int arr[n];
    for (int &i : arr)
        cin >> i;
    printTwoElements(arr, n);
    return 0;
}