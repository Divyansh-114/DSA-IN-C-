#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    // cycle sort
    int i = 0;
    while (i < n)
    {
        int correctidx = arr[i ] - 1;
        if (i == correctidx)
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[correctidx]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}