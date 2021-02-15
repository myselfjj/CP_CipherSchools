#include <bits/stdc++.h>
using namespace std;
 
int findPeakUtil(int arr[], int low,
                 int high, int n)
{

    int mid = low + (high - low) / 2;
 

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && 
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeakUtil(arr, low, (mid - 1), n);

    else
        return findPeakUtil(
            arr, (mid + 1), high, n);
}
int findPeak(int arr[], int n)
{
    return findPeakUtil(arr, 0, n - 1, n);
}
 
int main()
{
    int arr[10],n;
    cin>>n; // Size
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout << "Index of a peak point is "
         << findPeak(arr, n);
    return 0;
}
