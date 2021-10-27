#include <bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (arrSum(arr, n - 1) + arr[n - 1]);
}

int main()
{
    int n, i;
    int arr[100];

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of the elements of the array is " << arrSum(arr, n);
    return 0;
}