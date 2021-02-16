#include <bits/stdc++.h>
using namespace std;
int maxProfit(int prices[], int N)
{
	int n = N;
	int cost = 0;
	int maxCost = 0;

	if (n == 0) 
	{
		return 0;
	}
	int min_price = prices[0];

	for(int i = 0; i < n; i++)
	{
		min_price = min(min_price, prices[i]);
		cost = prices[i] - min_price;

		maxCost = max(maxCost, cost);
	}
	return maxCost;
}

int main()
{
	int arr[10],n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
	
	cout << maxProfit(arr, n);

	return 0;
}