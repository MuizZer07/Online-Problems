#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int a[3];
        for(int j=0; j<3; j++)
            cin >> a[j];

        sort(a, a+3);
        cout << "Case " << i << ": "<< a[1]<< endl;
    }


    return 0;
}
