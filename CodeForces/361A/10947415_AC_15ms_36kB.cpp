#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n>> k;

    int a[n][n];

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i==j) a[i][j] = k;
            else a[i][j] = 0;
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
           cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}

