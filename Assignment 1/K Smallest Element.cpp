#include <bits/stdc++.h>
using namespace std; 

void printSmall(int arr[], int n, int k) 
{ 
    for (int i = k; i < n; ++i) 
    { 
        int max_var = arr[k-1]; 
        int pos = k-1; 
        for (int j=k-2; j>=0; j--) 
        {              
            if (arr[j] > max_var) 
            { 
                max_var = arr[j]; 
                pos = j; 
            } 
        } 
        if (max_var > arr[i]) 
        { 
            int j = pos; 
            while (j < k-1) 
            { 
                arr[j] = arr[j+1]; 
                j++; 
            } 
            arr[k-1] = arr[i]; 
        }  
    } 
        for (int i=0; i<k; i++) 
        cout << arr[i] <<" "; 
                  
} 
int main() 
{ 
    int arr[10],n,k;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter K";
    cin>>k;
    printSmall(arr, n, k); 
    return 0; 
} 
