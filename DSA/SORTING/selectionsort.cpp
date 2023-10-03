#include <bits/stdc++.h>
using namespace std;
int main()
{
    int min = 19999;
    int n = 6;
    int arr[] = {1, -9, 5, -4, 6, 7};
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT8_MAX;
        int minidx = -1;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[i];
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int ele:arr){
        cout<<ele<<" "; 
    }
}

// time complexity(0(n2));
// in selection sort after each iteration the smallest element comes to first place ........