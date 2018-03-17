#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int n;
        cin >> n;
        int maxx = - 99999;
        for(int j=0; j<n; j++){
            int a;
            cin >> a;
            maxx =  max(maxx, a);
        }

        cout << "Case " << i << ": "<< maxx << endl;
    }


    return 0;
}

