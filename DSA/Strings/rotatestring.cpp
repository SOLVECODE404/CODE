#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> rotateClockHands(vector<string> times, int k)
{
    vector<string> rotatedTimes;
    int n = times.size();
    for (int i = 0; i < n; ++i)
    {
        rotatedTimes.push_back(times[(i + k) % n]);
    }
    return rotatedTimes;
}

int main()
{
    vector<string> initialTimes = {"10:00 AM", "11:00 AM", "12:00 PM", "1:00 PM", "2:00 PM"};
    int rotationSteps = 4;
    cout << "Original Times: ";
    for (const string &time : initialTimes)
    {
        cout << time << " ";
    }cout<<endl;
    vector<string> synchronizedTimes = rotateClockHands(initialTimes, rotationSteps);

    cout << "Synchronized Times: ";
    for (const string &time : synchronizedTimes)
    {
        cout << time << " ";
    }

    return 0;
}
