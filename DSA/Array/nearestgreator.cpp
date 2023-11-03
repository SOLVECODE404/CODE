#include <bits/stdc++.h>
using namespace std;

void nearestgreator(int arr[], int n)
{
    int arr2[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            arr2[j] = arr[i + 1];
        }
        else
        {
            arr2[j] = -1;
        }j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 1, 3, 4, 4};
    int n = 5;
    nearestgreator(arr, n);
}