
#include <bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;
5
	return inv_count;
}

int main()
{
	int arr[10],n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
	cout <<"Number of inversions are"<< getInvCount(arr, n);
	return 0;
}
