#include <bits/stdc++.h> 
using namespace std;
int search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;
     
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        if(mat[i][j] == x)
        {
            cout<<"Element found at ("<<
                        i << ", " << j << ")\n";
            return 1;
        }
    }
  
    cout << "n Element not found";
    return 0; 
}
int main()
{
    int mat[4][4] = { { 1, 7, 3, 3 },
                      { 5, 2, 5, 5 },
                      { 2, 9, 7, 8 },
                      { 3, 3, 9, 5 } };
    search(mat, 3, 9);
  
    return 0;
}
